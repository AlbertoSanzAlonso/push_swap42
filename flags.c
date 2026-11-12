#include "push_swap.h"

static int	set_strategy(char *s, t_ctx *ctx)
{
	if (ft_strcmp(s, "--medium") == 0)
	{
		ctx->strategy = STRAT_MEDIUM;
		return (1);
	}
	if (ft_strcmp(s, "--complex") == 0)
	{
		ctx->strategy = STRAT_COMPLEX;
		return (1);
	}
	if (ft_strcmp(s, "--adaptive") == 0)
	{
		ctx->strategy = STRAT_ADAPTIVE;
		return (1);
	}
	return (0);
}

int	set_flag(char *s, t_ctx *ctx)
{
	if (ft_strcmp(s, "--bench") == 0)
	{
		ctx->bench = 1;
		return (1);
	}
	if (ft_strcmp(s, "--simple") == 0)
	{
		ctx->strategy = STRAT_SIMPLE;
		return (1);
	}
	return (set_strategy(s, ctx));
}

int	parse_flags(int	argc, char **argv, t_ctx *ctx)
{
	int	i;

	i = 1;
	ctx->strategy = STRAT_ADAPTIVE;
	ctx->bench = 0;
	while (i < argc && argv[i][0] == '-' && argv[i][1] == '-')
	{
		if (!set_flag(argv[i], ctx))
			return (-1);
		i++;
	}
	return (i);
}

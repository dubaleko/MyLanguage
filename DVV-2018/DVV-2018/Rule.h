#pragma once
#include "GRB.h"
#define GRB_ERROR_SERIES 600
namespace GRB
{

	Greibach greibach(NS('S'), TS('$'), 8,
		Rule(NS('S'), GRB_ERROR_SERIES, 1,
			Rule::Chain(4, TS('d'), TS('['), NS('N'), TS(']'))
		),
		Rule(NS('N'), GRB_ERROR_SERIES + 1, 18,   
			Rule::Chain(6, TS('t'), TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),	  
			Rule::Chain(5, TS('t'), TS('i'), TS(':'), NS('E'), TS('.')),
			Rule::Chain(4, TS('t'), NS('O'), TS('.'), NS('N')),
			Rule::Chain(3, TS('t'), NS('O'), TS('.')),
			Rule::Chain(6, TS('t'), TS('i'), TS(':'), NS('P'), TS('.'), NS('N')),
			Rule::Chain(5, TS('t'), TS('i'), TS(':'), NS('P'), TS('.')),
			Rule::Chain(5, TS('i'), TS(':'), NS('P'), TS('.'), NS('N')),
			Rule::Chain(4, TS('i'), TS(':'), NS('P'), TS('.')),
			Rule::Chain(5, TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),
			Rule::Chain(4, TS('i'), TS(':'), NS('E'), TS('.')),
			Rule::Chain(12, TS('w'), TS('('), NS('K'), TS(')'), TS('['), NS('N'), TS(']'), TS('e'), TS('['), NS('N'), TS(']'), NS('N')), 
			Rule::Chain(8, TS('w'), TS('('), NS('K'), TS(')'), TS('['), NS('N'), TS(']'), NS('N')),		
			Rule::Chain(6, TS('p'), TS('('), TS('i'), TS(')'), TS('.'), NS('N')),
			Rule::Chain(5, TS('p'), TS('('), TS('i'), TS(')'), TS('.')),
			Rule::Chain(6, TS('p'), TS('('), TS('l'), TS(')'), TS('.'), NS('N')),
			Rule::Chain(5, TS('p'), TS('('), TS('l'), TS(')'), TS('.')),
			Rule::Chain(3, TS('r'), TS('i'), TS('.')),
			Rule::Chain(3, TS('r'), TS('l'), TS('.'))
		),
		Rule(NS('O'), GRB_ERROR_SERIES + 7, 2,
			Rule::Chain(1, TS('i')),
			Rule::Chain(3, TS('i'), TS(','), NS('O'))
		),
		Rule(NS('E'), GRB_ERROR_SERIES + 2, 4, 
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(4, TS('f'), TS('('), NS('i'), TS(')')),
			Rule::Chain(5, TS('f'), TS('('), NS('i'), TS(')'), NS('E'))
		),
		Rule(NS('P'), GRB_ERROR_SERIES + 3, 10, 
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(2, TS('i'), NS('P')),
			Rule::Chain(2, TS('l'), NS('P')),
			Rule::Chain(3, TS('i'), NS('M'), NS('P')),
			Rule::Chain(3, TS('l'), NS('M'), NS('P')),
			Rule::Chain(3, TS('('), NS('P'), TS(')')),
			Rule::Chain(5, TS('('), NS('P'), TS(')'), NS('M'), NS('P')),
			Rule::Chain(4, TS('('), NS('P'), TS(')'), NS('N')),
			Rule::Chain(3, TS('('), NS('P'), TS(')'))
		),
		Rule(NS('M'), GRB_ERROR_SERIES + 4, 4, 
			Rule::Chain(1, TS('+')),
			Rule::Chain(1, TS('-')),
			Rule::Chain(1, TS('*')),
			Rule::Chain(1, TS('/'))
		),
		Rule(NS('B'), GRB_ERROR_SERIES + 5, 3, 
			Rule::Chain(1, TS('>')),
			Rule::Chain(1, TS('<')),
			Rule::Chain(1, TS('='))
		),
		Rule(NS('K'), GRB_ERROR_SERIES + 6, 6, 
			Rule::Chain(1, TS('l')),
			Rule::Chain(1, TS('i')),
			Rule::Chain(3, TS('i'), NS('B'), TS('i')),
			Rule::Chain(3, TS('i'), NS('B'), TS('l')),
			Rule::Chain(3, TS('l'), NS('B'), TS('i')),
			Rule::Chain(3, TS('l'), NS('B'), TS('l'))
		)
	);
}
#pragma once
#include "GRB.h"
#define GRB_ERROR_SERIES 600
namespace GRB
{
	//улучшить ошибки
	Greibach greibach(NS('S'), TS('$'), 8,
		Rule(NS('S'), GRB_ERROR_SERIES, 1,
			Rule::Chain(4, TS('d'), TS('['), NS('N'), TS(']'))
		),
		Rule(NS('N'), GRB_ERROR_SERIES + 1, 21,   //возможные конструкци  в €зыке
			Rule::Chain(6, TS('t'), TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),	  // объ€вление переменной
			Rule::Chain(5, TS('t'), TS('i'), TS(':'), NS('E'), TS('.')),
			Rule::Chain(4, TS('t'), NS('O'), TS('.'), NS('N')),
			Rule::Chain(3, TS('t'), NS('O'), TS('.')),
			Rule::Chain(6, TS('t'), TS('i'), TS(','), NS('O'), TS('.'), NS('N')),
			Rule::Chain(5, TS('t'), TS('i'), TS(','), NS('O'), TS('.')),
			Rule::Chain(6, TS('t'), TS('i'), TS(':'), NS('P'), TS('.'), NS('N')),
			Rule::Chain(5, TS('t'), TS('i'), TS(':'), NS('P'), TS('.')),
			Rule::Chain(5, TS('i'), TS(':'), NS('P'), TS('.'), NS('N')),
			Rule::Chain(4, TS('i'), TS(':'), NS('P'), TS('.')),
			Rule::Chain(5, TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),
			Rule::Chain(4, TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),
			Rule::Chain(12, TS('w'), TS('('), NS('K'), TS(')'), TS('['), NS('N'), TS(']'), TS('e'), TS('['), NS('N'), TS(']'), NS('N')), //условие c else
			Rule::Chain(8, TS('w'), TS('('), NS('K'), TS(')'), TS('['), NS('N'), TS(']'), NS('N')),		// условие
			Rule::Chain(6, TS('p'), TS('('), TS('i'), TS(')'), TS('.'), NS('N')), 
			Rule::Chain(5, TS('p'), TS('('), TS('i'), TS(')'), TS('.')),
			Rule::Chain(6, TS('p'), TS('('), TS('l'), TS(')'), TS('.'), NS('N')),
			Rule::Chain(5, TS('p'), TS('('), TS('l'), TS(')'), TS('.')),
			Rule::Chain(5, TS('r'), TS('i'), TS(':'), NS('P'), TS('.')),
			Rule::Chain(3, TS('r'), TS('i'), TS('.')),
			Rule::Chain(3, TS('r'), TS('l'), TS('.'))
		),
		Rule(NS('O'), GRB_ERROR_SERIES + 7, 2, 
			Rule::Chain(1, TS('i')),
			Rule::Chain(3, TS('i'), TS(','), NS('O'))
			),
		Rule(NS('E'), GRB_ERROR_SERIES + 2, 5, // ошибка в инициализации
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(3, TS('i'), TS(','), NS('E')),
			Rule::Chain(4, TS('f'), TS('('), NS('E'), TS(')')),
			Rule::Chain(5, TS('f'), TS('('), NS('E'), TS(')'), NS('E'))		
		),
		Rule(NS('P'), GRB_ERROR_SERIES + 3 , 10, // ошибка в выражении
			Rule::Chain(1, TS('i')),
			Rule::Chain(1,TS('l')),
			Rule::Chain(2, TS('i'), NS('P')),
			Rule::Chain(2, TS('l'), NS('P')),
			Rule::Chain(3, TS('i'), NS('M'), NS('P')),
			Rule::Chain(3, TS('l'), NS('M'), NS('P')),	
			Rule::Chain(3, TS('('), NS('P'), TS(')')),
			Rule::Chain(5, TS('('), NS('P'), TS(')'), NS('M'), NS('P')),
			Rule::Chain(4, TS('('), NS('P'), TS(')'), NS('N')),
			Rule::Chain(3, TS('('), NS('P'), TS(')'))
		),
		Rule(NS('M'), GRB_ERROR_SERIES + 4, 4,  // знаки арифмет
			Rule::Chain(1, TS('+')),
			Rule::Chain(1, TS('-')),
			Rule::Chain(1, TS('*')),
			Rule::Chain(1, TS('/'))
		),
		Rule(NS('B'), GRB_ERROR_SERIES + 5, 3, // знаки логические
			Rule::Chain(1, TS('>')),
			Rule::Chain(1, TS('<')),
			Rule::Chain(1, TS('='))
		),
		Rule(NS('K'), GRB_ERROR_SERIES + 6, 8, //условие
			Rule::Chain(3, TS('i'), NS('B'), TS('i')),
			Rule::Chain(3, TS('l'), NS('B'), TS('l')),
			Rule::Chain(4, NS('P'), NS('B'), NS('P')),
			Rule::Chain(9, TS('f'), TS('('), TS('i'), TS(')'), NS('B'), TS('f'), TS('('), TS('i'), TS(')')),
			Rule::Chain(9, TS('f'), TS('('), TS('l'), TS(')'), NS('B'), TS('f'), TS('('), TS('l'), TS(')')),
			Rule::Chain(6, TS('f'), TS('('), TS('i'), TS(','), TS('i'), TS(')')),
			Rule::Chain(1, TS('l'))
		)
	);
}

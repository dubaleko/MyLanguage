#pragma once
#include "GRB.h"
#define GRB_ERROR_SERIES 600
namespace GRB
{
	Greibach greibach(NS('S'), TS('$'), 9,
		Rule(NS('S'), GRB_ERROR_SERIES, 1,  
			Rule::Chain(4, TS('d'), TS('['), NS('N'), TS(']'))
		),
		Rule(NS('N'), GRB_ERROR_SERIES + 1, 11,   //возможные конструкци  в €зыке
			Rule::Chain(6, TS('t'), TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),	  // объ€вление переменной
			Rule::Chain(4, TS('t'), TS('i'), TS('.'), NS('N')),
			Rule::Chain(5, TS('i'), TS(':'), NS('E'), TS('.'), NS('N')),
			Rule::Chain(12, TS('w'), TS('('), NS('K'), TS(')'), TS('['), NS('C'), TS(']'), TS('e'), TS('['), NS('C'), TS(']'), NS('N')), //условие c else
			Rule::Chain(8, TS('w'), TS('('), NS('K'), TS(')'), TS('['), NS('C'), TS(']'), NS('N')),		// условие
			Rule::Chain(6, TS('p'), TS('('),NS('E'), TS(')'), TS('.'), NS('N')), // вывод на экран
			Rule::Chain(5, TS('p'), TS('('), NS('E'), TS(')'), TS('.')),
			Rule::Chain(3, TS('r'), TS('i'), TS('.')),
			Rule::Chain(3, TS('r'), TS('l'), TS('.'))
		),
		Rule(NS('E'), GRB_ERROR_SERIES + 2, 10, // ошибка в выражении
			Rule::Chain(1, TS('i')),
			Rule::Chain(1, TS('l')),
			Rule::Chain(3, TS('i'), TS(','), TS('i')),
			Rule::Chain(4, TS('f'), TS('('), NS('E'), TS(')')),
			Rule::Chain(5, TS('f'), TS('('), NS('E'), TS(')'), NS('E')),
			Rule::Chain(3, TS('i'), NS('M'), TS('i')),
			Rule::Chain(4, TS('i'), NS('M'), TS('i'), NS('E'))
		),
		Rule(NS('C'), GRB_ERROR_SERIES + 3, 17,      // тело if 
			Rule::Chain(4, TS('i'), TS(':'), NS('E'), TS('.')),
			Rule::Chain(5, TS('i'), TS(':'), NS('E'), TS('.'), NS('C')),
			Rule::Chain(6, TS('t'), TS('i'), TS(':'), NS('E'), TS('.'), NS('C')),
			Rule::Chain(5, TS('t'), TS('i'), TS(':'), NS('E'), TS('.')),
			Rule::Chain(4, TS('t'), TS('i'), TS('.'), NS('C')),
			Rule::Chain(3, TS('t'), TS('i'), TS('.')),
			Rule::Chain(4, TS('p'), NS('E'), TS('.'), NS('C')),
			Rule::Chain(3, TS('p'), NS('E'), TS('.'))
		),
		Rule(NS('M'), GRB_ERROR_SERIES + 4 , 7,  // знаки
			Rule::Chain(1, TS('>')),
			Rule::Chain(1, TS('<')),
			Rule::Chain(1, TS('=')),
			Rule::Chain(1, TS('+')),
			Rule::Chain(1, TS('-')),
			Rule::Chain(1, TS('*')),
			Rule::Chain(1, TS('/'))
		),
		Rule(NS('K'), GRB_ERROR_SERIES + 5, 4, //условие
			Rule::Chain(3, TS('i'), NS('M'), TS('i')),
			Rule::Chain(3, TS('l'), NS('M'), TS('l'))
		)
	);
}

//
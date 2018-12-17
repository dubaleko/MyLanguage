#pragma once

namespace Gen
{
 #define START  *cs.stream << "using System;" << endl << endl << "namespace CourseProject" << endl << "{" << endl <<"\t" << "class DVV2018" << endl << "\t" << "{" << endl << endl << "\t" << "\t"; 
 #define END    *cs.stream  << endl << "\t" << "}" << endl  << "}";
	struct Cs
	{
		wchar_t csfile[PARAMETER_MAX_SIZE];
		std::ofstream* stream;
	};
	static const Cs FIRSTINIT = { L"", NULL };//для начальной инициализации Cs
	Cs getcs(wchar_t csfile[]);	//сформировать структуру Cs
	void StartGeneration(LEX::LexTable& ltable, ID::IdTable& itable, Gen::Cs& cs);
}
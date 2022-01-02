int countPoints(string rings)
{	set<string> s;
	string elem = "";
	for (int i = 0; i < rings.length(); i += 2)
	{
	elem = "";
	elem = rings[i];
	elem += rings[i + 1];
	s.insert(elem);
	}
	vector<string> p(10, "");
	int count = 0;
	for (auto it : s){
	 if (p[it[1]-'0'] != "")
	{
	p[it[1]-'0'].push_back(it[0]);
	continue;
	}
	p[it[1]-'0'] = it[0];
	}

	for(auto it: p){
		if (it.length()==3){ count++;
		}
	}
	return count;
}

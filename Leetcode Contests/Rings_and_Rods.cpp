int countPoints(string rings)
{
	set<string> s;
	string elem = "";
	for (int i = 0; i < rings.length(); i += 2)
	{
		elem = "";
		elem = rings[i];
		elem += rings[i + 1];
		s.insert(elem);
	}
	// set<int>::iterator itr;
	vector<string> p(10, "");
	int count = 0;
	for (auto it : s)
	{
		// cout<<it[0]<<" ";
		// cout<<it[1]<<"\n";
		// p[it[1]].push_back(it[0]);
		if (p[it[1]-'0'] != "")
		{
			// p[it[1]]+=it[0];
			p[it[1]-'0'].push_back(it[0]);
			// cout<<p[it[1]]<<" ";
			continue;
		}
		p[it[1]-'0'] = it[0];
		// cout<<p[it[1]]<<" ";
		// cout<<p[it[0]];
		// += it[i];
		// p[it[i + 1]].push_back(it[i]);
	}

	for(auto it: p){
		if (it.length()==3){
			count++;
		}
		// cout<<it<<" \n";
	}

	return count;
}

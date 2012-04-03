#include <ansi.h>

int set_spell(string key,int lv)
{
	this_player()->set("spells/"+key+"/level",lv);
	return 1;
}
int query_spell(string key)
{
	return this_player()->query("spells/"+key+"/level");
}
int spell_improved(string key,int point)
{
	this_player()->add("spells/"+key+"/learned",point);
	if(this_player()->query("spells/"+key+"/learned")>=this_player()->query("spells/"+key+"/level")*this_player()->query("spells/"+key+"/level")*10)
	{
		this_player()->add("spells/"+key+"/level",1);
		this_player()->set("spells/"+key+"/learned",0);
		tell_object(this_player(),HIY);
tell_object(this_player(),"���"+to_chinese(key)+"��������һ�㡣
\n"NOR);
	}
	return 1;
}

int delete_spell(string key)
{
	return this_player()->delete("spells/"+key);
}

#include <ansi.h>
int set_magic(object,string,int);
int magic_improved(object,string);
int add_magic(object me,string name,int points)
{
	me->add("magic/"+name+"/learned",points);
	if(me->query("magic/"+name+"/learned")>me->query("magic/"+name+"/level")*2)
		magic_improved(me,name);
	return 1;
}
int query_magic(object me,string name)
{
	return me->query("magic/"+name+"/level");
}
int magic_improved(object me,string name)
{
	me->add("magic/"+name+"/level",1);
	me->set("magic/"+name+"/learned",0);
	tell_object(me,HIY "���"+to_chinese(name)+"��������һ��¥��\n" NOR);
	return 1;
}
int set_magic(object me,string name,int level)
{
	me->set("magic/"+name+"/level",level);
	return 1;
}
int query_magic_learned(object me,string name)
{
	return me->query("magic/"+name+"/learned");
}
mapping query_all_magic(object me)
{
	return me->query("magic");
}

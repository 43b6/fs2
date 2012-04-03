 
inherit F_DAMAGE;
void friend_out(string str);
string call_friend()
{
	object me,obj;
	string *name;
	int i;
	me=this_player();
	if(!me->query("friend"))
		return "�Ҳ��ǵ�����ʲô��鰡 ?\n";
	name=keys(this_player()->query("friend"));
	for(i=0;i<sizeof(name);i++)
		friend_out(name[i]);
    return "��Ļ�����ܾ��ˡ�\n";
}
void friend_out(string name)
{
	object obj;
	obj=new(this_player()->query("friend/"+name+"/local"));
	obj->move(environment(this_player()));
	obj->set("combat_exp",this_player()->query("friend/"+name+"/exp"));
	message_vision(
		"$N�Ļ��$n�������˳�����\n",this_player(),obj);
}
int add_friend(object ob)
{
	object me=this_player();
	if(sizeof(me->query("friend"))>=this_player()->query("kar")/5||sizeof(me->query("friend"))>=6)
		return notify_fail("���ͬ��������Ｋ��");
	this_player()->set("friend/"+ob->name()+"/local",base_name(ob));
	this_player()->set("friend/"+ob->name()+"/exp",ob->query("combat_exp"));
	return 1;
}
int friend_die(object npc)
{
	mapping dict;
	int i;
	dict=this_object()->query("know")->query("friend");
	for(i=0;i<sizeof(dict);i++)
		if(dict[i]==base_name(npc))
			dict[i]="none";
	this_object()->query("know")->set("friend",dict);
	::die();
	return 1;
}

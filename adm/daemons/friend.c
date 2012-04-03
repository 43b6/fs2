 
inherit F_DAMAGE;
void friend_out(string str);
string call_friend()
{
	object me,obj;
	string *name;
	int i;
	me=this_player();
	if(!me->query("friend"))
		return "我不记得你有什么伙伴啊 ?\n";
	name=keys(this_player()->query("friend"));
	for(i=0;i<sizeof(name);i++)
		friend_out(name[i]);
    return "你的伙伴等你很久了。\n";
}
void friend_out(string name)
{
	object obj;
	obj=new(this_player()->query("friend/"+name+"/local"));
	obj->move(environment(this_player()));
	obj->set("combat_exp",this_player()->query("friend/"+name+"/exp"));
	message_vision(
		"$N的伙伴$n愉快的走了出来。\n",this_player(),obj);
}
int add_friend(object ob)
{
	object me=this_player();
	if(sizeof(me->query("friend"))>=this_player()->query("kar")/5||sizeof(me->query("friend"))>=6)
		return notify_fail("你的同伴个数到达极限");
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

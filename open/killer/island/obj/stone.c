inherit COMBINED_ITEM;
void create()
{
set_name("����ʯ", ({"stone"}) );
set("long","һ��޴����ʯ, ����ʹ�������ܲ��ܽ����ƿ�(move)!!\n");
set("unit", "��");
set("base_unit", "��");
set("no_sell",1);
set("value",100000);
set("base_weight", 10000000);
set_amount(1);
setup();
}

void init()
{
add_action("move_stone", "move");
}
int move_stone(string arg)
{
object ob,me;
me=this_player();
if (this_player()->query_temp("move_stone")!=1 && this_player()->query_temp("can_back")==1)
{
tell_object(this_player(),"��ʹ���Ľ�������ʯ�ƿ�, ֻ��һ�������Ӳ�����ʯ����Ķ�����!!\n");
new("/open/killer/island/obj/box2.c")->move(environment(this_player()));
ob=present("stone",environment(this_player()));
me->set_temp("move_stone",1);
destruct(ob);
return 1;}
else
{ 
tell_object(this_player(),"���Ʋ��������ʯ!!\n");
return 1;
}
}

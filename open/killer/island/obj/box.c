inherit ITEM;
void create ()
{
set_name("铁盒子",({"iron box","box"}));
set_weight(10);
    if(clonep())
        set_default_object(__FILE__);
    else{
	set("long","这是一个普通的铁盒子，似乎可以打开(open)的样子。");
	set("no_get",1);
	set("value",1);
	set("unit","盒");
	setup();
}}
void init()
{
add_action("do_open","open");
}
int do_open(string arg)
{
object me,ob;
me=this_player();
if(!arg||(arg!="box"))
return notify_fail("你要打开什么？\n");
if(me->query_temp("get_note")==1)
return notify_fail("你已经打开了这个铁盒子。\n");
if(me->query_temp("move_out")!=1)
return notify_fail("你打不开这个铁盒子。\n");
else{
ob=new(__DIR__"note");
me->delete_temp("move_out");
message_vision("$N打开了铁盒子，从你面取出了一张字条。\n",me);
ob->move(me);
me->set_temp("get_note",1);
return 1;
}
}
// made by ccat 
inherit COMBINED_ITEM;
void create()
{
        set_name("�ٻ�����¶", ({"flower pill","pill"}) );
	set("long",
	"һ��,�ٻ�����¶,�ܿ˰ٶ�,�����������(eat pill).\n");
	set("unit", "��");
	set("base_unit", "��");
        set("value", 15000);
        set("base_weight", 50);
	set_amount(1);
	setup();
}
void init()
{
	if( this_player()==environment() )
		add_action("eat_pill", "eat");
}
int eat_pill(string arg)
{
        object ob,me=this_player();
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
	message_vision(
		"$N����һ���ٻ�����¶.\n", me);
        me->clear_condition();
	add_amount(-1);
	return 1;
	
}


// made by ccat 
inherit COMBINED_ITEM;
void create()
{
        set_name("������", ({"gin pill","pill"}) );
	set("long",
	"һ��������,�Ὣ�����ת���ɾ�,�����������(eat pill).\n");
	set("unit", "��");
	set("base_unit", "��");
        set("value", 150);
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
	int max,now,now1,kee1;
        object ob,me=this_player();
        if( !arg )                      return 0;
        arg=lower_case(arg);
        if( !ob = present(arg,me) )     return 0;
  	if( ob != this_object() )       return 0;
	message_vision(
		"$N����һ��������\n", me);
        max = me->query("max_gin");
        kee1 = me->query("kee");
 	if( kee1 > 40 )
        {
           me->add("kee",-30);
           me->add("gin",25);
        }else{
          write("�����̫���޷�ת���ɾ�.\n");           
        }
        now = me->query("gin");
        if(now > max)
        {   
            me->set("gin",max);
            now = max;
        } 
	add_amount(-1);
	return 1;
	
}


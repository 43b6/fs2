inherit COMBINED_ITEM;
void create()
{
        set_name("������ҩ", ({"world pill","pill"}) );
set("long",
"�˵�ҩ����������ʹ���ߣ�ʹ�þ���ذ�׵�����������ǿ��ɱ��ħ��������\n"+
"�����������ӯӯ��˵�ĵ�ҩ��Ӧ�ÿ��Գ�(eat pill).\n");
        set("unit", "��");
        set("base_unit", "��");
        set("no_sell",1);
        set("value",0);
        set("base_weight", 10);
set_amount(1);
setup();
}

void init()
{
  if( this_player()==environment() )
  {
    add_action("eat_pill", "eat");
  }
}

int eat_pill(string arg)
{      

   object ob,me=this_player();

   if( !arg )                      return 0;
   arg=lower_case(arg);
   if( !ob = present(arg,me) )     return 0;
   if( ob != this_object() )       return 0;
   if (me->query("class") != "killer")
   {
	me->set("kee",10);
	tell_object(me,"�����֮��е�һ����  �ѵ����ж���!!!\n");
	ob->add_amount(-1);
	return 0;
   }
   if (me->query_temp("getpill") == 1)
   {
	   message_vision("$N���¾�����ҩ�󣬸е����ڷ·���һ����õ�����������.\n", me);
                  me->set("quest/worldpill",1);
	   ob->add_amount(-1);
	   return 1;
   }
    else
    {
       message_vision("$N���¾�����ҩ����֪��ҩ�����Լ�����.�����й�����㶼������\n",me);
       me->set("kee",10);
      me->set("gin",10);
      me->set("sen",10);
       ob->add_amount(-1);
       return 1;
    }
}

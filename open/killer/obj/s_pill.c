inherit COMBINED_ITEM;
void create()
{
        set_name("ɱ����ҩ", ({"killer pill","pill"}) );
set("long",
"��������Ż�������Զ��Ը�ʿɽ�ܶ�����֮��ҩ,���Իָ�����.\n"+
"�辭��Ҷ��ɱ�Ͽɲſ���ʳ��(eat pill).
  �������ɱ��ʳ���˻������صĺ��\n");
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
   int max_atman,atman;

   if( !arg )                      return 0;
   arg=lower_case(arg);
   if( !ob = present(arg,me) )     return 0;
   if( ob != this_object() )       return 0;
   if (me->query("class") != "killer")
   {
     atman=me->query("kee");
     atman= atman/2;
     me->add("kee",-atman);
tell_object(me,"�����֮��е�һ����  �ѵ����ж���!!!\n");
     ob->amount(-1);
     return 0;
   }
   message_vision("$N����һ��ɱ����ҩ.\n", me);
   max_atman = me->query("max_atman");
   me->set("atman",max_atman);
   ob->amount(-1);
   return 1;
}

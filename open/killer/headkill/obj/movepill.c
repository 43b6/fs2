inherit COMBINED_ITEM;
void create()
{
        set_name("˲�Ƶ�", ({"move pill","pill"}) );
set("long",
"��������Ż�������Զ��Ը�ʿɽ�ܶ�����֮��ҩ.\n"+
"ֻ����������ʹ�ã�һ��ɱ�ֲ��ò���������(eat pill)��.
  ����һ��ƮȻ���Եĸо�����˵���Դ�Խ�ռ䡣\n");
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
     ob->add_amount(-1);
     return 0;
   }
   message_vision("$N����˲�Ƶ�.\n", me);
   me->move("/open/killer/headkill/oldroom/r2.c");
   ob->add_amount(-1);
   return 1;
}

inherit ITEM;
void create()
{
      set_name("��������",({"yamen mark","mark"}) );
      set_weight(8000);
      if( clonep() )
           set_default_object(__FILE__);
      else {
           set("unit","��");
           set("long","������������䲼�ĵ�����, ������������������, "+
           "����Խ���������ʾ(show)�����˿���");
           set("value",1);
           }
      setup();
}

void init()
{
	add_action("do_show","show");
}

int do_show(string str)
{
	object me=this_player();
	object target;
        if( !present(this_object(),me))
	  return 0;
	if( !str || !present(str, environment(me)) )
	  return notify_fail("��Ҫ��˭��ʾ����?\n");
	target=present(str, environment(me));
	if( !target->is_character() || target==me)
	  return notify_fail("��Ҫ��˭��ʾ����?\n");
	message_vision("$N�ܳ�ƨ���ͳ�һ�桸�������ơ���$n��ҫ��\n",me,target);
	if(me->query_temp("thief") >= 2)
	{
	  message_vision("���$N�ֵܻ̿�˵: ����.."+RANK_D->query_respect(me)+"�кν��̡�\n",target,me);
	  target->set_temp("show_mark",getuid(me));
	}  
	else
	  message_vision("���$N�Ի��ɵ��۹��$n˵: ��������������\n",target,me);
	return 1;
}

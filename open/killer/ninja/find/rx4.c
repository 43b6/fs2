// open/killer/ninja/find/rx4.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
     Ϊ�˱��ⰵ�����ƿ������£�������ڱ����֣����Լ�������ȥ�������е㱿
     ����������ɱ�ֵĳ��ϼ���ʽ��ħ��ɱ������Ҫ���˺�Ӱ������......
     Ȼ����������ȫ���ʱ�������������ƺ�ʧȥ���ƣ�!!!
     ������Բ��ٵ�������̫��!!   ��ľ����忪ʼ��ɢ.......

LONG);
  setup();
}

void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  call_out("greeting",3 , ob);   
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",7);
     ob->set("sen",1);
     ob->set("gin",1);
     tell_object(ob," ��е������𽥻�ɢ....���������״̬..... \n");
     ob->move("/open/killer/room/pillrm.c");
    }
    // �������Ǻܲ����������͵�����ʦ�����ã�һ�������
    else 
     ob->move(__DIR__"r1.c");
}


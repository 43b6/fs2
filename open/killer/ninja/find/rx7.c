// open/killer/ninja/find/rx6.c
// �������Ӧ�û�ѡ����һ�����˳���͵����������
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  ��һ��ʼ�����û��ȥ���浽���ʱ�������һ�У����ھ�Ȼ���˼ҷ����ˣ�
  ����������̷�������������Ķ���ȥ!!! ���������Ƴ�һ��!!
  
  Ȼ�������̷�����ľ����ж�ô���޴�!! ��Ϊ�Է���Ȼʩչ�������ǲ�����!
  ������Զ�����������еĿ�!�Ҵ�������Ļ�Ӱ����!!!
  ����һ�ɣ�����Ϥ��İ�����������Լ�ϯ�����������������ħ��ɱ��!!
  ���������Ȼ����һ�ɶ���������ħ��ɱ�𣿣���!
  
  �㲢û�л�����̫�࣬��Ϊ�����ǰ�Ѿ�������������..............

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


// open/killer/ninja/find/rx20.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  ħ��ɱ���Ǹ�����������ǿ����������ƺ����������ж�Ϊ֮һ��
  Ȼ���������ɽ���ͽ���������뿪�������һ��֮Զ��
  ��������Ǿ��ѵĻ��ᣬ�Ųɻ��ǲ������뿪���������˱�ȥ��
  ���еİ������ѹ���ǿ���ħ����������ͬһʱ�䷢�����!
  Ȼ���������Ծ�Ȼ��һ��ǿ��ķ�����ǽ������İ���ȫ������!
  �Ʋ����ѣ��Ͻ��������е�ذ�׽�����һһ���䣬
  ����������һ����֮ʱ��һ��ǿ��Ľ����������������ǰһ��!
  
   
LONG);
  set("no_transmit",2);
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


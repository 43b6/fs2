// open/killer/ninja/find/rx10.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  �㳯����Ⱥħ��ͽ��ȥ,��˵�ɴ໹��Ͷ����ȽϺ�һ�㣬�Ͼ�����Ӧ�ÿ��Ի�ܾ�
  ������ȴ�����ˣ���ȴ��һ���ܻ���ô�á���Ϊ����������Ҫ˵����ʱ��
  �Է������У�ȴ�����������ۣ�����ʧȥ�Ȼ�����
  Ȼ��������ͬʱ���֣����㻹��������Ӧ��ʱ���Ѿ���ǰһ��
  
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


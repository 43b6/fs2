// open/killer/ninja/find/rx1.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
     �����һ��֮�󣬷���ħ�̵�һȺ�����������ҿ�ʼ��Ѱ����
     û��ã���Ȼ���˷��ֵ���Ĵ��ڣ����ҷ�������!!!
     �����û�л�����ͣ�ƴ���ĵֿ������Ǵ��⾫������㣬
     �޷�����ȫ����������Ŀǰ�������𽥻�ɢ����.........

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


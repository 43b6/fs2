// open/killer/ninja/find/rx24.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  ɭ�������ƺ������ʺ϶�صĵط�����������ٵĳ�ɭ�ֳ�ȥ
  ��Ȼ����ж��Ƿǳ���ȷ�ģ�ɭ�ֹ�Ȼ�Ƿǳ��ʺ϶��˵�
  һȺ�ɽ��ɵĸ������ö��������֮����������������һ��������
  ���潫�������ͣ��Լ�����ǰȥ�Ը���Щ���֣�
  ��������ס���Σ����㷭��������������ȥ��ʱ��
  ��ı������Ǹ��˵��������η�С������Ȼ�Ҹ������ɽ������飿��
  ��Ҳ���������ǰ�Ѿ�������ᴩ............
   
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


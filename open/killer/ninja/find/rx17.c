// open/killer/ninja/find/rx17.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  ��ô��Ȥ���������ȻҪ�úõĲ���һ�£��������������´�һ���顣
  Ȼ�������̷������Ƕ�ô�޴���һ�����飬��Ϊ��Ȼ�˼�����Ǳ�С�
  ��Ȼ����ϣ���������ƣ���������ͨ��һ���µ�˲�䡣
  �ɴ������Ϸų���ɽ�����Ľ������ᴩ���������.....
  ������ǰһ��֮ǰ�������ɽ����ʽ֮......��
  ���ʽ���ɽ���ô���к��ʽ��.......
   
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


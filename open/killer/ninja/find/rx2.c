// open/killer/ninja/find/rx2.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
     �㲻�ܲ����ǲ����а취������һ�У����̷���������������һ��
     ����û�뵽�ڰ���������ͬʱ�����ٵ���ӰͻȻ��ʧ��Ȼ���������ı���
     
     ���㵽����˭�����ǲ��Ƕ�������ļ����!!��
     ��������ش��ʱ�򣬸ղ�������Ӱ��������һ�㣬�ᴩ�����������!!!!
     ��ľ����ܵ����ش���!!��־��ʼ���Բ���..........

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


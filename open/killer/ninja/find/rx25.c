// open/killer/ninja/find/rx25.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  �㱾��������̽���ģ���������������Ȼ��ô֪���ֹ���Ӱ֮���أ�
  ������������ŵ��ߵ�������Ĺ����Ҫ�������浽������ʲô��
  ���Ǿ�Ȼû�п��������������ô���ܣ�����
  �����㻳�ɵ�ʱ�򣬱�����һ��̾������
  ����....�벻������Ҳ�޷����Σ�.........��
  һ��ǿ���ħ���������ڱ����������������Ļ��ᶼû��....
   
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


// open/killer/ninja/find/rx21.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  ������㻹��С��һ�㣬��Ҫ����������ŵ����ڵ���ʷ
  ���������������ս������û�뵽�����Ȼ����һ��
  ����ǿ������������ħ��ɱ����ϰ���ʽ�ַ���
  Ҳ���Ǹ���һ��¥�ġ�����.ħ��ɱ���������ڰ���֮��
  ����Ŀ�겢���Ǹ��ˣ����������Լ����ڵ���һȺ�ɽ���ͽ����!
  �Ƶ��Ǹ��˷����������棬�����跨������һЩ����!
  ���Ƕ��緱�ǣ��ҹ���ħ���İ�������ô����ȫ����������
  ����ɽ����ӷַ����У��ܲ��ҵ���Ҳ������һ��........
  
   
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


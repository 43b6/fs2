// open/killer/ninja/find/rx13.c
// ����ҷ���������󣬾ͻ��ܵ����ؾ����˺����˻������
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
  ����Ц����ôǿ�����棬�㻹����ʲħ�������������һ�𲢼���ս��
  ˳�㿴������û��ʲô���������ڣ�����Ц����Ȼ���ֹ���Ӱ�������
  ���úø������ô�����أ��㲻�û����Եõ��������Դ��ھ���.....
  ����ҲΪ��ȫ���ע������Ը���㣬��֪���������ʵ���Ĳ�����������ȥ
  �����ǹ�ǿ���ѹ�ȸ��Ѿ��ƽ���һ��ǿ��Ľ�������Ϯ������������
  ǰ��δ�е�ǿ������ֱ���������Ϲᴩ������������޷���Ӧ.....
  ������ǰһ��֮ǰ������ԼԼ��������˵
  ��̫С�����˰ɣ���Ȼ�����ɽ����ʽ�ĵ���ʽ����......��
  
  �ɽ����ʽ�������ɽ����ǲ��к���ʽ�����𣿣���
  
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


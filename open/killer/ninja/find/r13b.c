// open/killer/ninja/find/r13b.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
    Ϊ�˱�ʾ����������أ������������ԭ�غúõȴ���
    û�ж�ú������ɱ�����������ο�Ķ���˵��
    ������������ǿ������ε���....����Ӧ��˵�Ǿ������
      ��ȻС���ʩչ����̽������������ֵ�����εģ���ʵҲ֤�����
      ���ڱ�������һ����磬���ȥ��ֻҪ��Ĺ������
      ����(intone) "Ү����������" �㽫����ȡ����ë����
      ������֮�󣬲��ٲŻ���㣬�ֹ���Ӱ��........
      ���߰�....�������ǶԸ������Ǹ��Ϲ��.........��
    �㱾�������ս�ģ����Ǿ������ƺ����л������𽥳��뿪������硣
    
    
LONG);

  set("no_transmit",2);
  setup();
}

//�����ϣ�����b���֣��йطֹ���Ӱ�Ĳ���
//����b�����ǣ��й� ɱ�ֵ�һЩ�����趨�Ľ��� ����ֻ��Ҫ����ڽ�һ��
void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  
  if (ob->query("ninja/bpart") != 1)
  	ob->set("ninja/bpart",1);
  	
  //������һ���֪����a���ֵ�����������Ҫ����ٽ�
  if (ob->query("ninja/apart") != 1)
  	call_out("greeting",5 , ob);   
  else
  {
  	call_out("finished",5 , ob);
  }  	
}

void greeting(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   { 
     tell_object(ob,"��Ȼ��ë���������Ѿ����\n");
     tell_object(ob,"�������ƺ���©��һЩ��������̽����һ���ְ�\n");
     ob->move(__DIR__"r1.c");
   }
    else 
     ob->move(__DIR__"r1.c");
}

void finished(object ob)
{
   if( ob->query_temp("firstpart")== 8)    
   {
     ob->set_temp("firstpart",9);
     tell_object(ob,"���е���ʷ�������Ѿ�̽����ɡ� \n");
     tell_object(ob,"����Ҫ��ȥ����ë�����ҳ����ˡ�\n");
     ob->move("/open/killer/room/pillrm.c");
   }
   else 
     ob->move(__DIR__"r1.c");
}
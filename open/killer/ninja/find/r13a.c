// open/killer/ninja/find/r13a.c
#include </open/open.h>
inherit ROOM;

void create ()
{
  set ("short", "����̽��");
  set ("long", @LONG
  
    �㿴׼���ֵ�©�������û��ǲ�����ս�����н����ˣ�
    ����һ�����ս��֮�����˵�ѹ����ʱ����......
    Ҷ��ɱ�û��������������ڻ�֮����ʽ��������ǵ㽫���ֱ���
    ������Ϊȱ����.�����񹦵��ƶ������Աƽ����ֽ�ħ�������������
    ���ټ���Ҷ��ɱ��������������ʽ������ͻȻ��������......
    ��Сɱ�����ұ��˶���!�������������������ӽ��ͣ�
    Ҷ��ɱ���̽��ֱߵİ�����ϰ���ʽһ�����ȥ������ߵĵ��˱���
    ���ٳô˿�϶����ħ����ע����֮�ϣ�ʹ�ð���ʽ���ַ����������
    ��ʱ��������Ϥ������ħ��ɱ���ɲ��ٷ���!!.......
    ħ��ɱ�ɲ���ȫ��������Ȼ��ͬ���죬��ߵĵ���һһ����.......
    ʣ�µĵ���Ҳη���������������׷�����...ԭ�������ħ��ɱ��������
    ȫ��ʩչ�Ĳ��٣���ʱ��Ҳ�����ĵ�������....
    Ҷ��ɱ�Ͻ���ס���٣����ҳ������˹���...........
    ��Ȼ�����߽�Ҷ��ɱ�����Ǿ������ƺ����л������𽥳��뿪������硣
    
    
LONG);

  set("no_transmit",2);
  setup();
}

//�����ϣ�����a���֣��й� ɱ�ֵ�һЩ�����趨�Ľ���
//����b�������йطֹ���Ӱ�Ĳ��֣�����ֻ��Ҫ����ڽ�һ��
void init()
{
    object ob=this_player();
    if( interactive(ob))
	    remove_call_out("greeting");
  
  if (ob->query("ninja/apart") != 1)
  	ob->set("ninja/apart",1);
  //������һ���֪����b���ֵ�����������Ҫ����ٽ�
  if (ob->query("ninja/bpart") != 1)
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
     tell_object(ob,"��Ȼ��Щ��ʽ�������Ѿ����\n");
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


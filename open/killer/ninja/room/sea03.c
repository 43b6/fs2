//һ���⺣���� ��·�ߣ������� ���� 
inherit ROOM;

void create()
{
set("short", "�⺣");
set("long", @LONG

	һ���޼ʵĴ󺣣����˲������ؿ����������Һ������ɡ�
	ãã�Ĵ��У����㲻֪���ú�ȥ�δӣ�Ϊ�˱�����·��
	���ǹԹԵİ��գ�һ���·��ǰ����........
	
LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
        "east" : __DIR__"sea02.c",
]));
set("no_transmit",2);
setup();
}

void init()
{
  int i;
  object guard;
  object me=this_player();

 if(interactive(me) && (random (4) < 1 ))
 {//25%�ĵ��˳��ֻ���
  i=random(5); 
  // �� ������ĵ�������ѡ�����ʵ�
  // һ������Ļ����������Ͷ࣬����û�кñ�����ǳ��������
  switch(i)
  {
	case 0:
	//ֱ���͵����������������ڷ���
        //���Ǳ��⣬��ҷ����ڻ�û����֮ǰ������������÷���
		guard=new(__DIR__"npc/normal01.c");
		guard->move(environment(me));
		break;
	case 1:
		guard=new(__DIR__"npc/normal01");		
		break;
	case 2:
		guard=new(__DIR__"npc/normal01");
		break;
	case 3:
		guard=new(__DIR__"npc/normal01");
		break;
	case 4:
		guard=new("/open/killer/headkill/npc/shuryu.c");
		break;
  }//SWITCH
  guard->move(environment(me));
 }//IF
}


int valid_leave(object me, string dir)
 {
 object target;
 
// target = offensive_target(me);
 if(me->is_fighting())
 //if(present(guard->query("id"),environment(me)))
 {
    if (random(10) < 5)
    {
    	me->start_busy(2);
    	return notify_fail("����ʧ�ܣ�����Ϊ֮һ��!!!!\n");
    }
  }
  return 1;
}

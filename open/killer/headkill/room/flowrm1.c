inherit ROOM;
void create()
{
set("short", "��԰����");
set("long", @LONG
	������ǰ����һ��Ƭ�����ң������ŷۺ�ɫ�Ļ��䣬΢�������֦��ҡҷ��
	������裬�g���̺죬���貨�˵����ɣ����ɵ����˳���
	��黨�ݵ���һ�ѶѲ�����������ʯ��������ЩСɽ�ߵ�ʯ�ѣ�
	���˾�ɫ��׺�ĸ���и�ɻ���ʯ���뻨֮�����Ųβ�����С����
	�����������ü����ң������������ü����ң�����ֻ��һ��ʯͷ��

LONG );
set("exits", ([ /* sizeof() == 2 */
  "north": "/open/killer/room/outr3.c",
  "east" : "/open/killer/room/outr3.c",
  "west" : __DIR__"flowrm2.c",
  "south": "/open/killer/room/outr3.c",
]));

setup();
}

int valid_leave(object me, string dir)
{
  if (dir != "west") 
  {
    me->set_temp("flowrun",0);
    return 1;
  }
//���±�ʾ�߶���ȷ����
  if (me->query_temp("head") < 1)
  {//���ǽ����߲����Խ���԰����
    me->move("/open/killer/room/outr3.c");
    return 0;
  }
  //�����ǻ�԰����Ŀ�ͷ���ߴ�ͱ�������
  //��һ������ſ�ʼ����ǲ����߹�·�ˣ�
  me->set_temp("flowrun",1);
  return 1;
}

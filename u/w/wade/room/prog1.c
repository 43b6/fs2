inherit ROOM;

void create ()
{
  set ("short", "�����ĳ�ʽд������ -- ��");
  set("long", @LONG_DESC

// �������ÿ����ʽ, ��������, ����, ��, װ��, ����....����Ϊ ���
// �������������������: ����, ��Ϊ
// ����ͨ������ set("����", "ֵ"); ���������趨
// ��Ϊͨ�����ڶ����������̳е������,
//     ��������� inherit NPC;
//       ������� inherit ROOM;
//       �̵���� inherit SHOP;
//       װ������ inherir EQUIP;
//
// ���� NPC, ROOM, SHOP...���Ƕ�������? һ����˵, �������
//    /include/globals.h �ҵ����ǵĶ���, ��:
//    #define NPC /std/char/npc
//    #define ROOM /std/room
// ����Ķ�����˵, ������� inherit NPC, ���ʾ���Ǽ̳� /std/char/npc.c
//
// �����������...
LONG_DESC);

  setup();
}

void init()
{
  add_action("e", "e");
  add_action("e", "east");
  add_action("go", "go");
}

int e()
{
  this_player()->move(__DIR__"prog2");
  return 1;
}

int go(string str)
{
  if (str == "e" || str == "east")
    this_player()->move(__DIR__"prog2");
  return 1;
}

inherit ROOM;
void create()
{
  set ("short", "����");
  set ("long", @LONG
����ɱ���ǳ���׷ɱ���ˣ����³�Ҳ��٣���̳��Ȼ������ѵıܷ�ۡ�
Ϊ�˷��㳤�ڶ�أ��ص���ר���˲����ݣ���������ɱ�ֵ�ר���ҡ�
������ɱ��ר�õ�����������˵ɱ����ҩ������������Ƶġ�
LONG);
   set("exits", ([
   "east"   : __DIR__"floorm.c",
   "west"   : __DIR__"pillrm.c",
   "north"  : __DIR__"sellrm.c",
  ]));
   set("no_fight", 1);
  set("no_magic", 1);
  set("no_transmit", 2);
  set("light_up", 1);
  setup();
} 

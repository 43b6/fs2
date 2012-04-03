inherit ROOM;
void create ()
{
  set ("short", "ս���һ���");
  set ("long", @LONG

�˴��������һ�ս���ĵط�!!Ŀǰ���Զһ�����Ŀ���£�
-------------------------------------------------------------
  ��  Ŀ           �� λ          ����ս��              �һ�ָ��
01.���ֵ����         1                3               need_max_atman
02.���ֵ����         1                3               need_max_mana
03.���ֵ����         1                5               need_max_force
04.����               1               80               need_standby
05.��������           1              120               need_str
06.��ʶ����           1              120               need_cor
07.��ò����           1              120               need_per
08.��������           1              120               need_con
09.��������           1              150               need_int
10.��Ե����           1              150               need_kar
11.��������           1              200               need_spi
12.��������           1              200               need_cps

LONG);
  set("light_up", 1);
  set("exits", ([ /* sizeof() == 1 */
  "north" : __DIR__"road1",
]));
  setup();
}
void init()
{
  add_action("max_atman","need_max_atman");
  add_action("max_mana","need_max_mana");
  add_action("max_force","need_max_force");
  add_action("standby","need_standby");
  add_action("str","need_str");
  add_action("cor","need_cor");
  add_action("per","need_per");
  add_action("con","need_con");
  add_action("intt","need_int");
  add_action("kar","need_kar");
  add_action("cps","need_cps");
  add_action("spi","need_spi");
/*
  add_action("meq","need_meq");
  add_action("godeq","need_godeq");
*/
}

int max_atman()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 3) {
  me->add("war_kills",-3);
  me->add("max_atman",1);
log_file("clan/atman", sprintf("%s(%s)��ȡ������ս����ȡ��һ�������ֵ\n"
   ,me->query("name"),me->query("id")));
  write("��������ս��������һ����������ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int max_mana()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 3) {
  me->add("war_kills",-3);
  me->add("max_mana",1);
log_file("clan/mana", sprintf("%s(%s)��ȡ������ս����ȡ��һ��ķ���ֵ\n"
   ,me->query("name"),me->query("id")));
  write("��������ս��������һ�����ķ���ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
int max_force()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 5) {
  me->add("war_kills",-5);
  me->add("max_force",1);
log_file("clan/force", sprintf("%s(%s)��ȡ�����ս����ȡ��һ�������ֵ\n"
   ,me->query("name"),me->query("id")));
  write("�������ս��������һ����������ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
int standby()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 80) {
  me->add("war_kills",-80);
  me->add("standby",1);
log_file("clan/standby", sprintf("%s(%s)��ȡ�ð�ʮ��ս����ȡ��һ������\n"
   ,me->query("name"),me->query("id")));
  write("���ð�ʮ��ս������ȡһ������\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
int str()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("str",1);
log_file("clan/str", sprintf("%s(%s)��ȡ��һ�ٶ�ʮ��ս����ȡ��һ��ı���ֵ\n"
   ,me->query("name"),me->query("id")));
  write("����һ�ٶ�ʮ��ս��������һ��ı���ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int cor()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("cor",1);
log_file("clan/cor", sprintf("%s(%s)��ȡ��һ�ٶ�ʮ��ս����ȡ��һ��ĵ�ʶֵ\n"
   ,me->query("name"),me->query("id")));
  write("����һ�ٶ�ʮ��ս��������һ��ĵ�ʶֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int per()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("per",1);
log_file("clan/per", sprintf("%s(%s)��ȡ��һ�ٶ�ʮ��ս����ȡ��һ������ֵ\n"
   ,me->query("name"),me->query("id")));
  write("����һ�ٶ�ʮ��ս��������һ����������ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
int con()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 120) {
  me->add("war_kills",-120);
  me->add("con",1);
log_file("clan/con", sprintf("%s(%s)��ȡ��һ�ٶ�ʮ��ս����ȡ��һ��ĸ���ֵ\n"
   ,me->query("name"),me->query("id")));
  write("����һ�ٶ�ʮ��ս��������һ��ĸ���ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
int intt()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 150) {
  me->add("war_kills",-150);
  me->add("int",1);
log_file("clan/int", sprintf("%s(%s)��ȡ��һ����ʮ��ս����ȡ��һ�������ֵ\n"
   ,me->query("name"),me->query("id")));
  write("����һ����ʮ��ս��������һ�������ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int kar()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 150) {
  me->add("war_kills",-150);
  me->add("kar",1);
log_file("clan/kar", sprintf("%s(%s)��ȡ��һ����ʮ��ս����ȡ��һ��ĸ�Եֵ\n"
   ,me->query("name"),me->query("id")));
  write("����һ����ʮ��ս��������һ��ĸ�Եֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int cps()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 200) {
  me->add("war_kills",-200);
  me->add("cps",1);
log_file("clan/cps", sprintf("%s(%s)��ȡ�ö��ٵ�ս����ȡ��һ��Ķ���ֵ\n"
   ,me->query("name"),me->query("id")));
  write("���ö��ٵ�ս��������һ��Ķ���ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int spi()
{
 object me = this_player();
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 200) {
  me->add("war_kills",-200);
  me->add("spi",1);
log_file("clan/spi", sprintf("%s(%s)��ȡ�ö��ٵ�ս����ȡ��һ�������ֵ\n"
   ,me->query("name"),me->query("id")));
  write("���ö��ٵ�ս��������һ�������ֵ\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
// �ص���ս���� meq and godeq by swy
// meq and godeq ������ area ���� ppl k npc �� by swy
/*
int meq()
{
 object me = this_player(),mid;
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 600) {
  me->add("war_kills",-600);
  mid=new("/data/autoload/blademan/mdragon");
  mid->move(me);
log_file("clan/meq", sprintf("%s(%s)��ȡ�����ٵ�ս����ȡħ���ͷ���\n"
   ,me->query("name"),me->query("id")));
  write("�������ٵ�ս����ȡ��ħ���ͷ���!!\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}

int godeq()
{
 object me = this_player(),mid;
 int war_value;
 war_value = me->query("war_kills");
 if (war_value > 1000) {
  me->add("war_kills",-1000);
  mid=new("/data/autoload/god/god_eq");
  mid->move(me);
log_file("clan/godeq", sprintf("%s(%s)��ȡ��һǧ��ս����ȡ����ͷ���\n"
   ,me->query("name"),me->query("id")));
  write("����һǧ��ս����ȡ������ͷ���!!\n");
  return 1;
 }
 write("�Բ���!!����ս��ֵ������!!!\n");
 return 0;
}
*/

// ���۽�Ʒ�����ŷ���!!!
#include <room.h>
#include <ansi.h>
inherit ROOM;
string *user_gift_2 = ({
"palla","trust","luner","gendor","chritina","yukigirl"})
,*user_gift_3 = ({"leing","aspire","zero","amy","pnx"})
,*user_gift_5 = ({"lancelin","dunga","chan"})
,*user_max_force=({"guility","apple","sillyboy","mudcom","nicklin","cyberfight","aro",
"windows","pzp","copy","ansys","shian","women","roman","aait","namie","leing","chan"});
void create ()
{
set ("short",HIY"���۽�Ʒ�����ԡ����ܡ��������ֵ�����Ŵ�"NOR);
set ("long","������۹��н�����ʮλ��Ҳμ�!!!!
���۵Ľ�Ʒ�����help fs_net��help fs_net2
�˷����������������۽�Ʒ�ķ���!!
���ߵķ����Ƿ�������ķ���!!!
˵�����£�
���ԵĲ��ݣ�
           1.���ȴ�check_gift ��Ҫ��ȷ�����ǲ��ǿ��Լ�����
           2.�ڴ�get_gift <���Ե�Ӣ��> <��ֵ> ��Ҫ�Ǽ�ĳ������ֵ
             ex: get_gift con 3
�̶������ԵĲ��ݣ�
           1.���get_fix_gift
�̶��ļ��ܵĲ��ݣ�
           1.���get_basic_force �ӻ����ķ�
           2.��source��wasain��post��Ҫ�ӵ��ر���\���ķ�,���ܼ����ʽ!!!!
�������ֵ�Ĳ��ݣ�
           1.���get_max_force

");
  set("no_kill",1);
  set("no_fight",1);
  set("light_up",1);
  set("exits", ([
  "east" : "/open/wiz/stbyroom",
]));
  setup();
}

void init()
{
add_action("in_fix_gift","get_fix_gift");
add_action("in_max_force","get_max_force");
add_action("in_basic_force","get_basic_force");
add_action("in_check","check_gift");
add_action("in_gift","get_gift");
}
int in_fix_gift()
{
 object me = this_player();
 string name=me->query("id");
 if(!me->query("fs_net3/fix_gift"))
  {
   if(name == "fee")
    {
     write("��ϲ��õ���ȫ���ı������������!!!\n");
     me->set("str",35);
     me->set("per",35);
     me->set("fs_net3/fix_gift",1);
     log_file("net/gift", sprintf("%s(%s) ��ȡ���۽�Ʒ!!���Ա��������ȫ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
   }else if(name == "catbaby")
   {
     write("��ϲ��õ���ȫ���ı������������!!!\n");
     me->set("str",35);
     me->set("per",35);
     me->set("fs_net3/fix_gift",1);
     log_file("net/gift", sprintf("%s(%s) ��ȡ���۽�Ʒ!!���Ա��������ȫ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
 }else if(name=="evilshadow")
   {
     write("��ϲ��õ���ȫ�����������!!!\n");
     me->set("per",35);
     me->set("fs_net3/fix_gift",1);
     log_file("net/gift", sprintf("%s(%s) ��ȡ���۽�Ʒ!!�������ȫ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
   }else if(name=="libra")
   {
     write("��ϲ��õ���ȫ���ı�������!!!\n");
     me->set("str",35);
     me->set("fs_net3/fix_gift",1);
     log_file("net/gift", sprintf("%s(%s) ��ȡ���۽�Ʒ!!���Ա��������ȫ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
   }else
   write("��û�й̶����Կ�����!!!\n");
   return 1;
  }
  write("���Ծ�����!!!\n");
  return 1;
}
int in_basic_force()
{
 object me = this_player();
 string name=me->query("id");
 int skill_value;
 if(!me->query("fs_net3/basic_force"))
  {
   if(name == "success")
    {
     write("��ϲ��õ���һ�ٵ�Ļ�����\���ķ�!!!\n");
     skill_value=me->query_skill("force",1);
     skill_value=skill_value+100;
     me->set_skill("force",skill_value);
     me->set("fs_net3/basic_force",1);
     log_file("net/gift", sprintf("%s(%s) ��ȡ���۽�Ʒ!!���������ķ�����ʮ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
   }else if(name == "wasain")
   {
     write("��ϲ��õ�����ʮ��Ļ�����\���ķ�!!!\n");
     skill_value=me->query_skill("force",1);
     skill_value=skill_value+50;
     me->set_skill("force",skill_value);
     me->set("fs_net3/basic_force",1);
     log_file("net/gift", sprintf("%s(%s) ��ȡ���۽�Ʒ!!���������ķ�����ʮ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
   }else
   write("��û��������֮��!!\n");
   return 1;
  }
  write("���Ծ�����!!!\n");
  return 1;
}
int in_max_force()
{
object me = this_player();
string name=me->query("id");
int i,j,number=sizeof(user_max_force);
if(!me->query("fs_net3/max_force"))
 {
   if(name=="aait") {
write("����������ֵ�Ӷ��ٵ�!!!\n");
me->add("max_force",200);
me->set("fs_net3/max_force",1);
log_file("net/max_force",sprintf("%s(%s)��ȡ���۽�Ʒ!!�������ֵ�Ӷ��ٵ�!!ʱ����%s!!\n",me->query("name"),me->query("id"),ctime(time()) ));
return 1;
}else
   for (j=0; j<number; j++)
    if(user_max_force[j] == name)
     {
     write("��ϲ������ֵ��һ�ٵ�!!!\n");
     me->add("max_force",100);
     me->set("fs_net3/max_force",1);
     log_file("net/max_force", sprintf("%s(%s) ��ȡ���۽�Ʒ!!�������ֵ��һ��!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
     }
    write("sorry!!�㲢����������!!!\n");
    return 1;
 }
    write("���Ծ�����!!!\n");
    return 1;
}
int in_check()
{
object me = this_player();
string name=me->query("id");
int i,j,number=sizeof(user_gift_2);
if(!me->query("fs_net3/check_gift"))
 {
   for (j=0; j<number; j++)
    if(user_gift_2[j] == name)
     {
     me->set("fs_net3/check_gift",1);
     me->set("fs_net3/gift_number",2);
     write("��ϲ��ͨ��CHECK���ж������������ֵ !!!\n");
     log_file("net/check_gift", sprintf("%s(%s) ͨ������Check!!���Եõ���������!!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
     }
    number=sizeof(user_gift_3);
   for (j=0; j<number; j++)
    if(user_gift_3[j] == name)
     {
     me->set("fs_net3/check_gift",1);
     me->set("fs_net3/gift_number",3);
     write("��ϲ��ͨ��CHECK�����������������ֵ !!!\n");
     log_file("net/check_gift", sprintf("%s(%s) ͨ������Check!!���Եõ���������!!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
     }
    number=sizeof(user_gift_5);
   for (j=0; j<number; j++)
    if(user_gift_5[j] == name)
     {
     me->set("fs_net3/check_gift",1);
     me->set("fs_net3/gift_number",5);
     write("��ϲ��ͨ��CHECK����������������ֵ !!!\n");
     log_file("net/check_gift", sprintf("%s(%s) ͨ������Check!!���Եõ��������!!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
     }
    write("sorry!!�㲢��������������û���κ����Կ�������!!!\n");
    return 1;
  }
    write("���Ծ�ͨ��CHECK��!!!����֪�����ж������Կ��Լ����help fs_net3\n");
    return 1;
}
int in_gift(string arg)
{
  object me = this_player();
  string name=me->query("id"),gift;
  int number;
  if( !arg ) {
     write("��ʽ����!!!!\n");
     return 1;
  }
  if( sscanf(arg,"%s %d",gift,number) != 2 ) {
     write("��ʽ����!!!!\n");
     return 1;
  }
  if(!me-query("fs_net3/check_gift")){
     write("����δ����CHECK!!!!!\n");
     return 1;
  }
  if(me->query("fs_net3/gift_number") < 1) {
     write("������Ե���������!!\n");
     return 1;
  }
  if(me->query("fs_net3/gift_number") < number) {
     write("������Ե�������Ŷ!!\n");
     return 1;
  }
  if((gift != "con")&&(gift != "str")&&(gift != "kar")&&(gift != "int")&&(gift != "cps")&&
(gift != "spi") && (gift != "per") && (gift != "cor")) {
     write("û����������!!!!\n");
     return 1;
  }
  me->add(gift,number);
  me->add("fs_net3/gift_number",-number);
  write("�����������ӳɹ�!!\n");
 log_file("net/gift", sprintf("%s(%s) ͨ��������%s������%d!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),gift,number,ctime(time()) ));
     return 1;
}

// ���۽�Ʒ�����ŷ���!!!
#include <room.h>
#include <ansi.h>
inherit ROOM;
string *user_id_2 = ({
"aspire","zero","amy","pnx","palla","trust","luner","gendor","catbaby","aanswer",
"chritina","madoka","jojowolf","sula","flamer","nakama","lancelin","lunn","libraa",
"hikki","zard","snowcraft","dunga","bloodblade","julio","leon","ddt","victor","kaze",
"lovesui","fee","evilshadow","wasain","guilty","apple","sillyboy","nicklin","aro",
"windows","cyberfight","pzp","copy","ansys","shian","women","namie","chan"
}),*user_id_4 = ({"puffy","smirk","sdgudam","cyr","leing","chan"});
void create ()
{
set ("short",HIC"���۽�Ʒ���������Ŵ�"NOR);
set ("long","������۹��н�����ʮλ��Ҳμ�!!!!
���۵Ľ�Ʒ�����help fs_net��help fs_net2
�˷���������������������ķ���!!
���ߵķ����Ƿ������ԡ����ܡ������ķ���!!!
�����Ƿ���ħ���ͷ��ߵķ���
ָ�����£�
          get_standby  <��ȡ������۵Ľ�Ʒ>

");
  set("no_kill",1);
  set("no_fight",1);
  set("light_up",1);
  set("exits", ([
  "north" : "/open/wiz/fsroom",
  "east"  : "/open/wiz/meqroom.c",
  "west" : "/open/wiz/skill_room",
]));
  setup();
}

void init()
{
add_action("in_standby","get_standby");
}
int in_standby()
{
object me = this_player();
string name=me->query("id");
int i,j,number=sizeof(user_id_2),four=sizeof(user_id_4);
if(!me->query("fs_net3/standby"))
 {
   if(name=="lancelin")
    {
     write("��ϲ��õ�����������!!!\n");
     me->add("standby",3);
     me->set("fs_net3/standby",1);
     log_file("net/standby", sprintf("%s(%s) ��ȡ��������Ʒ!!��������!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
    }else if(name=="yukigirl")
    {
     write("��ϲ��õ����������!!!\n");
     me->add("standby",5);
     me->set("fs_net3/standby",1);
     log_file("net/standby", sprintf("%s(%s) ��ȡ��������Ʒ!!�������!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
    }else if(name=="hgf")
    {
     write("��ϲ��õ���ʮ��������!!!\n");
     me->add("standby",13);
     me->set("fs_net3/standby",1);
     log_file("net/standby", sprintf("%s(%s) ��ȡ��������Ʒ!!����ʮ����!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
    }
   for (j=0; j<number; j++)
    if(user_id_2[j] == name)
     {
     write("��ϲ��õ��˶�������!!!\n");
     me->add("standby",2);
     me->set("fs_net3/standby",1);
     log_file("net/standby", sprintf("%s(%s) ��ȡ��������Ʒ!!�������!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
     }
   for(j=0;j<four;j++)
    if(user_id_4[j]==name)
     {
     write("��ϲ��õ����ĸ�����!!!\n");
     me->add("standby",4);
     me->set("fs_net3/standby",1);
     log_file("net/standby", sprintf("%s(%s) ��ȡ��������Ʒ!!�����ĸ�!!ʱ����%s!!\n"
     ,me->query("name"),me->query("id"),ctime(time()) ));
     return 1;
     }
    write("sorry!!�㲢����������!!!\n");
    return 1;
 }
    write("���Ծ�����!!!\n");
    return 1;
}

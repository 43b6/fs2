
// fight glove   make by chilice
#include <mudlib.h>
#include <ansi.h>
#include <armor.h>
#include <command.h>
inherit ITEM;
inherit F_SAVE;
inherit F_AUTOLOAD;
inherit F_DAMAGE;


void create()
{
	set_name("ս������",({"fight glove","glove"}) );
	set_weight(100);
        if( clonep() )
                set_default_object(__FILE__);
        else {
set("long",@LONG
����һ˫�ܹ�ħ����--�ø�--���������,�ܴ���������ı�����
��ֻ��ӵ����ʦ�������˲���ʹ����,���򽫻��е���Ǵ��(����)

�÷�:add <����> <��ֵ>


�÷�:change <����> <��ֵ>

����: kee,gin,sen,force,mana,atman,bellicosity,food,water
	max_kee,eff_kee

�÷�:trans <����> <����> 

example->trans name �׳�
LONG);
set("unit","˫");
        set("value",1750);
        set("material","crimsonsteel");
        set("armor_prop/armor", 8);
        }
        setup();
}

int query_autoload()
{
  if (wizardp(this_player()))
    return 1;
  else return 0;
}

void init()
{
  object me;
  seteuid(geteuid());

  me = this_player();
  if (me)
	set_name (me->name(1)+ "ս������", ({ "fight glove","glove" }));
  else
	set_name ("ս������", ({ "fight glove","glove" }));
add_action("do_add","add");
add_action("do_change","change");
add_action("do_trans","trans");
  this_player()->set_temp("heat",1);
}

int do_add(string str){
	int amount;
	string skil;
	object me;
if (!wizardp(this_player())) {
	write("hmm.......�뱻�����!!\n");
return 1;
}
if(!str||sscanf(str, "%s %d",skil,amount)!=2)
	return notify_fail("[glove]:add <����> <��ֵ>\n");
	me=this_player();
	me->set_skill(skil,amount);
message_vision( sprintf("$N���׵����ܺ�Ȼ���"+CYN+"���������"+NOR+",%s����Ϊ%d������\n",skil,amount),me);
return 1;
}

int do_change( string str) {
	int num;
	string po;
	object me;
if (!wizardp(this_player())) {
	write("hmm.......�뱻�����!!\n");
return 1;
}
if(!str||sscanf(str, "%s %d",po,num)!=2)
	return notify_fail("[glove]:change <����> <��ֵ>\n");
	me=this_player();
	me->set(po,num);
message_vision( sprintf("$N�����׺�Ȼ����ǿ�ҵ�"+CYN+"��ɫ���"+NOR+",%s��Ϊ%d������\n",po,num),me);
return 1;

}

int do_trans(string str){
	string ch1,ch2;
	object me;

if (!wizardp(this_player())) {
	write("hmm.......�뱻�����!!\n");
return 1;
}
if(!str||sscanf(str, "%s %s",ch1,ch2)!=2)
return notify_fail("[glove]:trans <����> <����>\n");
	me=this_player();
	me->set(ch1,ch2);
	message_vision( sprintf("$N��%s��Ϊ%s\n",ch1,ch2),me);
return 1;
}

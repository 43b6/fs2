// ���������ϴ� master.c by Onion
//change by adam 97/11/25
#include <ansi.h>
inherit NPC;
inherit F_MASTER;
string do_agree();

void create()
{
	set_name("������", ({ "master yang", "yang", "master" }) );
        set("long",
        "�������Ǹ���ò�Ͱ���������������ʮ��ǰ���Ǹ�������ˣ������������������ɴñ��"+
        "�˳��ٳ�������Ѿ��������£�ת����ϰ����֮�����������ɵĹ����ӡ�\n");
	set("nickname", "�����");
	set("gender", "����" );
	set("age", 60);
	set("cor", 30);
	set("cps", 27);
	set("int", 24);

	set("max_force", 1500);
	set("force", 1500);
	set("force_factor", 3);

        set("rank_info/respect", "������");
        set("officer_class","���ݴ�����");
        set("guild_master",1);
        set("class","scholar");
	set("title",HIW"�������������᳤"NOR);
	set("combat_exp",1000000);
   set_skill("dodge",60);
	set_skill("be-officer", 20);
     set_skill("stabber",100);
	set_skill("force", 80);
        set_skill("magic", 20);
	set_skill("move", 60);
	set_skill("parry", 60);
	set_skill("unarmed",40);
	set_skill("literate",95);
  set_skill("spells",20);
   set_skill("cure",60);
	set("inquiry", ([
	"name" : "�Ϸ���ǵ�������֮�ף������飬���ҵ��أ������Ϊ�����顣",
	"here": "��������������ᡣ",
	"agree" : (: do_agree :),
	"��������":"��Ҳ���Ϊһ��������?ֻҪ����(join)�����ˡ�",
	]) );

	setup();
        carry_object(CLASS_D("scholar")+"/obj/gold_pen")->wield();
}

void init()
{
	add_action("do_join","join");
}

int do_join(string str)
{
	object me=this_player();
	if(str!=0)
	  return notify_fail("���\"join\"���ɡ�\n");
	if(me->query("class")=="scholar")
	  return notify_fail("���Ѿ������������һԱ�ˡ�\n");
	if(me->query("class")!=0)
	  return notify_fail("���Ѿ������˱�Ĺ�����\n");
	me->set("class","scholar");
	write(HIC"�����ĺͰ��Ķ���˵���ӽ����������������һԱ�ˡ�\n"NOR);
	command("pat "+getuid(me));
	tell_object(users(),query("name")+HIC"��Х������ӭ"+me->query("name")+
	"�����������ᡣ\n"NOR);
	return 1;
}
string do_agree()
{
	object me=this_player();
        if( me->query("class")!="scholar" )
          return("��Ǹ, �鷿�������Ÿ������������Ա��\n");
//�ص���������ɱ���ĳ�ʽby bss
//  if( me->query("bellicosity") > 100 )
//     return("��Ǹ, ���ɱ��̫��, �ҵ��鷿����ӭ��������, ��Щ�����ȡ�\n");
        me->set_temp("�����鷿",1);
        return("��ӭ..��ӭ..����Խ����鷿�ˡ�\n");
}


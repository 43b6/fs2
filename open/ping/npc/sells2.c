//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
	set_name("С��",({"vendor"}));
	set("gender", "����" );
	set("age", 27);
set("long", @LONG
�Ĵ���̯��ЩС��������,������г�(list)����Щʲô...
LONG
	);
	set("combat_exp",800);
        set("attitude", "friendly");
        set_skill("dodge", 25);
        set_skill("hammer", 17);
        set_skill("parry", 27);
	set("vendor_goods", ({
                COMMON_OBJ"bandage",
                COMMON_OBJ"pill",
                COMMON_OBJ"pill1",
                COMMON_OBJ"plaster",
                PING_OBJ"cloud",
                CAPITAL_OBJ"tea",
		"/obj/example/wineskin",
		"/obj/example/dumpling",
		"/obj/example/chicken_leg",
	}) );
	setup();
        carry_object("/obj/example/chicken_leg")->wield();
        carry_object("/open/gsword/obj/robe")->wear();
	add_money("coin",35);
}

void greeting(object ob)
{
	int gender,per;
	gender = 0;
	per = ob->query("per");
	if( !ob || environment(ob) != environment() ) return;
	if( ob->query("gender") == "Ů��")
	  gender = 1;
	switch( random(3) ) {
		case 0:
                if( per < 18 && gender)
	          say("С��������С����˵: ��! "+ob->name(1)
                       +",Ҳ\\�튅��ȥһ���ĵǷ�!\n");

		say("С��������С����˵: ��λ"+RANK_D->query_respect(ob)
                        +"����Щ������!\n");
			break;
		case 1:
                if( per > 22 )
                   say("С��˻��ô\�ȵ�: "+ob->name(1)
                        +"���ĺ����Ӱ�����!\n");
                         
                say("С��˻��ô\�ȵ�: "+RANK_D->query_respect(ob)
                    +",��������������,�������! ����������!?\n");
			break;
		case 2:
                if( per < 15)
	say("С��С����˵: "+ob->name(1)+",��߱�һ�㹫���ĺ���? �˳���"
	            +"��Ͳ�Ҫ�Ͻ�����.\n");
		if( per > 26 && gender)
                    say("С����̾��: ��! ����Ů"+ob->name(1)
		        +",�������������·�ѽ!!\n");
		        
		say("С����������: ��¥������,"+RANK_D->query_respect(ob)
			+"Ҫ�Ļ����ҿ��������һ���!\n");
			break;
	 }

}

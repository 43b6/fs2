//vendor.c
#include "/open/open.h"
inherit F_VENDOR;

void create()
{
set_name("ɱ��ר�������ϰ�",({"vendor"}));
set("gender", "����" );
set("age", 50);
set("long", @LONG
������Ҷ��ɱ�ص�����������ɱ�֣���ɲ�Ҫ��ɱ��Ŷ��������
,������г�(list)����Щʲô...
LONG
);
        set("combat_exp",200000);
        set("max_kee",2000);
        set("kee",2000);
        set("attitude", "friendly");
        set_skill("dodge", 80);
        set_skill("hammer", 80);
        set_skill("parry", 80);
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
        carry_object("/open/killer/weapon/k_cloth2")->wear();
add_money("gold",2);
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
          say("�ϰ�΢Ц��˵���ǡ����� "+ob->name(1)
                       +",��������������������Ү!\n");

say("�ϰ����Ŀ�����˵�� ��λ"+RANK_D->query_respect(ob)
                        +"�����½�ɱ�ְɣ�����㶫����Σ�!\n");
break;
case 1:
                if( per > 22 )
                   say("�ϰ�˻��ô\�ȵ�: "+ob->name(1)
                        +"��֣�����������û����ôƯ�����!\n");
                say("�ϰ�˻��ô\�ȵ�: "+RANK_D->query_respect(ob)
                    +",��������������!�����򣬼۸�һ������?\n");
break;
case 2:
                if( per < 15)
say("�ϰ����������˵�� "+ob->name(1)+"������"
            +"\n���ã��һ���Ϊ���Ҽ����ĺ����ܳ����ˣ���\n");
if( per > 26 && gender)
                    say("�ϰ���̾��: ��! ��ħ"+ob->name(1)
        +",���������˲�����Ҫ����Ү��������!!\n");
        
say("�ϰ��������: ��¥������,"+RANK_D->query_respect(ob)
+"�������ŵĻ����ҿ��������һ���!\n");
break;
 }
}

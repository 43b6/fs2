#include <ansi.h>
#include "/open/open.h"
inherit F_VENDOR;
void create()
{
        set_name("С��",({"small two","small","two"}));
        set("gender", "����" );
        set("age",25);
        set("long", "������ջ��С�� , ����æ���к����� .\n");
        set("attitude", "friendly");
        set("combat_exp",30000);
        set("nickname",HIY"��������"NOR);
        set("vendor_goods", ({
        "/obj/example/chicken_leg",
        "/obj/example/dumpling",
        "/obj/example/wineskin",

        }) );

        setup();
}
void greeting(object ob)
{
        command("say ���������ûɶ����ס���� ");
        command("say ���û���һλ����ס�ޣ����򱾵�Ҫ���ņ���");
}

int accept_kill(object ob)
{
 command("say û�п�������æ��?�治֪�ô����Ҷ�����ͷ��!");
 command("say ������!!");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say С�ֵܣ�������æ���к����ˣ���һ�²������档");
return 0;
}

#include <ansi.h>
inherit NPC;
void create()
{
 set_name("�Ű�",({"chan au","chan","au"}));
 set("long","

     ����������ԭ����ҽ�ߣ�����Ľ���ӵ�ҽ�������ݷ���Ҳ��˸�
    
     ����ѧ�˲��ٵ�ҽ���������ǻ��ӵ��������֣����ڽ�����ҽ��

     �꣬������һ��ĺ��Ṧ�����Եõ�һ���º�Ϊ����硣

 ");
 set("gender","����");
 set("class","doctor");
 set("nickname","�����");
 set("combat_exp",450000);
 set("attitude","heroism");
 set("age",33);
 set("title","�����ŵ�������");
 set("str",15);
 set("cor",30);
 set("cps",20);
 set("kar",25);
 set("force",2000);
 set("max_force",2000);
 set("max_kee",1500);
 set("kee",1500);
 set_skill("literate",60);
 set_skill("cure",80);
 set_skill("dodge",90);
 set_skill("move",90);
 set_skill("parry",30);
 set_skill("stabber",40);
 set_skill("force",40);
 set_skill("unarmed",20);
 set_skill("yu-needle",60);
set_skill("seven-steps",90);
 set_skill("godcure",60);
 set_skill("shinnoforce",40);
 map_skill("stabber","yu-needle");
map_skill("dodge","seven-steps");
 map_skill("force","shinnoforce");
map_skill("move","seven-steps");
 map_skill("parry","yu-needle");
 map_skill("cure","godcure");
 set("force_factor",10);
 set("inquiry",([
 "�����"  : "�����������������ң������������?",
 ]));
 setup();
        carry_object("/open/doctor/obj/needle5.c")->wield();
        add_money("gold",5);
}
void greeting(object ob)
{
        if( (string)ob->query("class") == "poisoner" )
{
        command("say ������ƽ��޶�������֮�ˣ������ұ�Ϊ��������������ɣ�");
        kill_ob(ob);
}
}




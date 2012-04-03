#include "/open/open.h"
#include <ansi.h>
#include <marksman.h>
int do_list();
inherit F_VENDOR;
void create()
{
        set_name("����", ({ "chang sen","chang","sen" }) );
        set("gender", "����" );
        set("age", 45);
        set("long", @LONG
���ǳ�ɳ�����������������������������������Щʲô(list)��
LONG);
        set("title",HIR"�������"NOR);
        set("attitude", "friendly");
        set("combat_exp",50000);
        set_skill("archery",40);
        set_skill("parry",40);
        set_skill("dodge",40);
        set("greeting_msg", ({
        "����˵: ��λ��ʿ����ʲôһЩ������������?\n",
        "�����е�: ����ʲô������Ҫ��Ϊ��������!!\n",
        }) );
        set("list",([
        "come": ([
                 "local":"/open/marksman/obj/come",
                 "id":"come",
                ]),
        "sparrow arrow": ([
                "local":"/open/marksman/obj/arrow-2",
                "id":"sparrow arrow",
                ]),
        "violet arrow": ([
                "local":"/open/marksman/obj/arrow-3",
                "id":"violet arrow",
                ]),
        "red arrow":([
                "local":"/open/marksman/obj/arrow-4",
                "id":"red arrow",
                ]),
        "steel bow":([
                "local":"/open/marksman/obj/bow-2",
                "id":"steel bow",
                ]),
        "paint bow": ([
                "local":"/open/marksman/obj/bow-3",
                "id":"paint bow",
                ]),
        "force bow": ([
                "local":"/open/marksman/obj/bow-4",
                "id":"force bow",
                ]),
]));
        setup();
carry_object(C_OBJ"/arrow-1");
carry_object(C_OBJ"/bow-1")->wield();
}
int accept_kill(object ob)
{
 command("say ��!������Ҳ��ɱ����������");
 command("holdwith arrow");
 command("kill"+ob->query("id"));
return 1;
}
int accept_fight(object ob)
{
command("say ��û�п�������æ�𣿲�Ҫ�����Ϳ��߰�!");
return 0;
}
void init()
{
           add_action("do_list","view");
        add_action("do_want","want");
}
int do_list()
{
return notify_fail("
����������֮������

һ����ȸ��(Sparrow arrow)  
һ����а��(Violet arrow)   
һ����ȸ��(Red arrow)      
������(Steel bow)            
���ṭ(Paint bow)             
���乭(Force bow) 
����  (come)

����Ҫ�������� want xxxx\n");
}

int do_want(string weapon)
{
        object ob;
        if(this_player()->query("class")!="marksman")
        {
                command("say ���������ֻ�б������á�\n");
                return 1;
        }
        if(!query("list/"+weapon))
        {
                command("say ����Ҫʲô������\n");
                return 1;
        }
        if(present(query("list/"+weapon+"/id"),this_player()))
        {
                command("say �������������á�\n");
                return 1;
        }
        ob=new(query("list/"+weapon+"/local"));
        ob->move(this_player());
message_vision("$N�ø�$n��Ҫ��"+ob->name()+"��\n",this_object(),this_player());
                return 1;
}

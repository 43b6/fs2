inherit NPC;

int *a=({0, 0, 0, 0, 0, 0});
int *b=({0, 0, 0, 0, 0, 0});
int in_toss;

void create()
{
        set_name("�»�Ұ��", ({ "ghost" }) );
        set("gender", "����" );
        set("age", 50);
        set("int", 30);
        set("long","һ���䵥��Ұ��·���Ĺ��䶼�������к�������������죬�㲻�ÿ��Դ�������̽��������Ϣ�����������г���̰�������񣬷·�ǰ��ʮ�ֺöġ�\n" );
        set("combat_exp",50000);
        set("max_kee",500);
        set("max_gin",500);                        
        set("attitude", "peaceful");
        set_skill("unarmed",50);
        set_skill("parry",50);
        set_skill("force",50);
        setup();
}

void init()
{
        add_action("reply", "ask");
        add_action("do_beg", "beg");
        add_action("do_kneeze", "kneeze");
        add_action("do_play","play");
        add_action("do_toss","toss");
}

int reply(string str)
{
int i;

    i = this_player()->query_temp("ask");
    if(i == 0)
        write("������һ����������ģ�Ӧ�������κ��ŵĵ�ͷ�߰ɣ�\n");
    else if (i == 1)
        write("����ʶ�ܶ��������ร���������ܿ��̵Ļ�������(beg)�Ұɣ�\n");
    else if (i >= 2) {
        write("�Ҿ�����Ϊ�öģ���Ƿծ���ۣ���󱻷Ÿ����������ġ������������������ˣ����ٹ���ֵܻ�Ƿ��Ǯ�֣�\n");
        return 1;
    }
    if (this_player()->query_tmp("death/quest"))
        write("��˵�κ�������һ��С��ͨ���ӱߣ������в��ٺö��������\n");

    this_player()->set_temp("ask", ++i);
    return 1;
}

int do_beg(string str)
{
        if (str != "ghost")
                return notify_fail("��Ҫ��˭������\n");
        else if(this_player()->query_temp("death/dice"))
                return notify_fail("���Ѿ��������һ���ˣ���Ҫ̰���������ң���\n");
        else {
            if(this_player()->query_temp("ask") < 3)
                return notify_fail("��Ҫ�������ȹ�(kneeze)��������һ�ΰɣ�\n");
            else {
                write("�ðɣ�������ô�г��⣬�͸�����(play)һ�̰ɣ���Ӯ���ٰ���˵�顣\n");
                this_player()->set_temp("ask", 4);
                return 1;
            }
        }
}

int do_kneeze(string str)
{
        if(str != "ghost")
                return notify_fail("��Ҫ��˭���°�����\n");
        else
        {
            if(this_player()->query_temp("ask")>=3)
                return notify_fail("���Ѿ��������ˣ�\n");
            else {
                message_vision("$Nһ��ί���س��»�Ұ�������ȥ��\n", this_player());
                this_player()->set_temp("ask", 3);
                return 1;
            }
        }
}


int do_play(string str)
{
        if(this_player()->query_temp("ask")<4)
                return notify_fail("����ү��м�����棡�����Ұɣ�\n");
        else
        {
        if(this_player()->query_temp("death/force"))
                write("�»�Ұ��˵�������ɣ�����(toss)����(dice)��\n              ��������ı��Ҵ�����Ͳ��ÿ������ˣ�\n              ������ֻ��һ�εĻ���ร�\n");
        else if(this_player()->query_temp("death/mana"))
                write("�»�Ұ��˵�������ɣ�����(toss)����(dice)��\n              ��������ı��Ҵ�����Ͳ��ÿ۷����ˣ�\n              ������ֻ��һ�εĻ���ร�\n");
        else if(this_player()->query_temp("death/atman"))
                write("�»�Ұ��˵�������ɣ�����(toss)����(dice)��\n              ��������ı��Ҵ�����Ͳ��ÿ������ˣ�\n              ������ֻ��һ�εĻ���ร�\n");
        else
        {
                write("�»�Ұ��˵���������Բ�����ͻȻ�����Ҳ��ܰ������æ������ȥ�ұ��˰ɣ�\n");
                this_player()->delete_temp("ask");
        }
        }
        this_player()->set_temp("ask", 5);
        return 1;
}

int do_toss(string str)
{
        int i;

        if( str!="dice") 
                return notify_fail("��Ҫ��ʲô��\n");
/*      if(this_player()->query_temp("ask")!=5)
                return notify_fail("����ү��м�����棡�����Ұɣ�\n");*/
        if(this_player()->query_temp("death/dice"))
                return notify_fail("���Ѿ��������һ���ˣ���Ҫ̰���������ң���\n");
        if(this_player()->query_temp("death/force"))
                return notify_fail("�Ҳ��ܰ����κ�æ�����㲻Ҫ�����ˣ�\n");
        if( in_toss )
                return notify_fail("�����ڸ������棬��Ҫ������ǣ���\n");
        in_toss=1;
        this_player()->set_temp("ask", 6);
        for(i=0;i<3;i++)
        {
                a[i]=random(6)+1;
                a[i+3]=0;
                b[i]=random(6)+1;
                b[i+3]=0;
        }
        a[3]=a[0]+a[1]+a[2];
        b[3]=b[0]+b[1]+b[2];

        if(a[1]==a[2] && a[0]==a[1])
                a[5]=a[1];
        else if(a[1]==a[2] || a[0]==a[1])
                a[4]=a[1];
        else if(a[0]==a[1] || a[0]==a[2])
                a[4]=a[0];
        else if(a[1]==a[2] || a[0]==a[2])
                a[4]=a[2];
        else
                a[4]=0;
                
        if(b[1]==b[2] && b[0]==b[1])
                b[5]=b[1];
        else if(b[1]==b[2] || b[0]==b[1])
                b[4]=b[1];
        else if(b[0]==b[1] || b[0]==b[2])
                b[4]=b[0];
        else if(b[1]==b[2] || b[0]==b[2])
                b[4]=b[2];
        else
                b[4]=0;
        message_vision("$N�󺰡�������������Ұɣ�������\�Ӱɣ�\n$N����һ�����е����ӣ����ص����빫��˦ȥ����\n", this_player());
        call_out("roll_dice", 2, 0, this_player()->query("id"));
        return 1;
}

void roll_dice(int i, string ppl)
{
        if(i<3)
        {
        say("�������빫�����һ����������ڵ�"+chinese_number(i+1)+"������ͣ����������"+chinese_number(a[i])+"�㡣\n");
        call_out("roll_dice", 2, i+1, ppl);
        } else {
        if(a[5] > 0)
        say("\nҰ��˵��������Ҫʹ���������Ӯ���ˣ����ҵģ�\n");
        else if(a[4] > 0)
        say("\nҰ��˵������С�ӣ�����������ļ�������������ڻ����ˣ�\n");
        else
        say("\nҰ��˵����������������������˶�����������ôʹ���㣡\n");
        say("\nҰ��һ��ץ�����ӣ������������������������Ŵ�һ�������������������ذ����е��������������빫��˦ȥ��\n\n");
        call_out("ghost_turn", 3, 0, ppl);
        }
}

int ghost_turn(int i, string ppl)
{
object ob;

        if(i<3)
        {
        say("�������빫�﷭����һ���ӣ���Ұ����һ����ͣ��\n���Ӻ���������Ƶ�ͣ����������"+chinese_number(i+1)+"�ŵĵ�����"+chinese_number(b[i])+"��\n");
        call_out("ghost_turn", 2, i+1, ppl);
        } else {
        in_toss=0;
        ob=find_player(ppl);
        ob->set_temp("death/dice", 1);
        ob->delete_temp("ask");
        if(a[5] == b[5] && a[4]==b[4] && a[3] == b[3]) {
                ob->delete_temp("death/dice");
                ob->set_temp("ask", 5);
                say("\nҰ��˵�������ƽ�֣�����һ�Σ�\n");
                return 1;
        } else if(a[5] < b[5] ) {
                say("\nҰ��˵�������������㲻���ҵĶ�������\n");
                return 1;
        } else if(a[4] < b[4]) {
                say("\nҰ��˵�����������Һ�ǿ�ɣ��´������ɣ�\n");
                return 1;
        } else if(a[3] < b[3]) {
                say("\nҰ��˵����������������������ʱ���㣡\n");
        } else {
        say("\nҰ��˵���������������ˢ�ӣ�����ȥ�����ѣ��ٵ������ͽ̣���\n");
        ob->delete_temp("death/force");
        ob->delete_temp("death/mana");
        ob->delete_temp("death/atman");
        return 1;
        }
        }
}


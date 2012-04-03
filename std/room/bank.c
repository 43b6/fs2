// made by funkcat, copy and re-edit by ccat, modify by ice..
// ����������ȡ���� By Swy
// 1.���޶�ʮ�����ƽ�
// 2.ȡ����Ʊ���ƶ�
// 3.ֻ�ܶһ��ƽ����Ӽ�ͭǮ
// 4.fix by chan
inherit ROOM;
string kind;
void init() 
{
        add_action("account_check","balance") ;
        add_action("withdraw_money","withdraw"); 
        add_action("deposit_money","deposit");
        add_action("do_convert","convert");
        add_action("lend_money", "lend");
        add_action("relend_money", "relend");
}
                                                   
int account_check(string arg)
{
        int t_gold, gold, silver, coin;
        object ob;

        if(arg && wizardp(this_player()))
        {
          if(find_player(arg))
          {
            ob=find_player(arg);
            tell_object(this_player(),sprintf("���ڿ�%s(%s)�Ĵ��!!\n",ob->query("name"),arg));
          }
          else
            return notify_fail("û�������!!\n");
        }
        else
        {
          ob=this_player();
        }
        t_gold = ob->query("bank/silver");
        if(t_gold >0)                        //���ж�ʮ�����ƽ���Ʊ����ȡ������Ǯ
           ob->delete("bank/silver");
       
          //ֻ������,���Ӽ�ͭǮ
        coin   = ob->query("bank/coin"); 
        t_gold = coin;
        gold   = (int) coin / 10000;
        coin   = (int) coin % 10000;
        silver = (int) coin / 100;
        coin   = (int) coin % 100;
        write(sprintf("\n��һ������\n    %7d  ���ƽ�\n    %7d  ������\n    %7d  ��ͭǮ\n",
         gold, silver, coin), this_player());
        if(t_gold < 0)   //�д泬����λ��, �Ͱ�Ǯ����, by bss
        {
           ob->delete("bank");
           tell_object(ob,"���Ǯ�为����, ϵͳ�����������!!\n");
        }

        return 1;
}                       
                        
int withdraw_money(string arg)
{
        int amount, value;
        object me = this_player(), n_money;                        
        if( !arg || sscanf(arg, "%d %s", amount, kind)!=2 )
                return notify_fail("\nwithdraw <����> <����>\n");

        if( amount + me->query_encumbrance() > me->query_max_encumbrance() )
                return notify_fail("���ò�����ô�ص�Ǯ��\n");

        n_money = present(kind + "_money", me);
          
        if( !n_money && file_size("/obj/money/" + kind + ".c") < 0 )
                return notify_fail("��û������Ǯ��\n");                      
                                                        
        if( amount < 1 )             
                return notify_fail("�㲻��������������Ǯ��\n");
        if( amount > 9000 )
                return notify_fail("��ЩǮ���ϱ��ɣ�������ˡ�\n");

        value = n_money ? n_money->query("base_value") : call_other("/obj/money/" + kind, "query", "base_value" );

        value *= amount;
        if(value <0 && wizardp(me)) printf("value=%d\n",value);
        if(value < 0) return notify_fail("��û����ô��Ǯ!!!\n");
        if(me->query("bank/coin") < value) {
                if( !me->query("bank/silver") )
                        return notify_fail("��û����ô��Ǯ\n");
                else {
                        me->add("bank/silver", -1);
                        value = 2000000000 - value;
                        value += me->query("bank/coin");     
                        me->set("bank/coin", value);
                }
        }
        else me->set("bank/coin", me->query("bank/coin")-value);
   
        if( !n_money ) {
                n_money = new("/obj/money/" + kind);
                n_money->move(me);
                n_money->set_amount(amount);
        } 
        else
                n_money->set_amount(n_money->query_amount()+amount);    
                                                    
        write(sprintf("��һ�����%s%s%s\n",
   chinese_number(amount),n_money->query("base_unit"),n_money->query("name")));
                        
        return 1;
} 
                
int deposit_money(string arg)
{
        int amount;
        object n_money, gold_money, silver_money, coin_money, me = this_player();
        int value, gold, silver, coin;
                        
        if(!arg)
                return notify_fail("\ndeposit <����> <����> || deposit all \n");   
                                                        
        if( arg == "all" )
        {
                gold = 0; silver = 0; coin = 0;
                if( gold_money = present("gold_money", me) )
                {
                        gold = gold_money->query_amount();
                        gold_money->set_amount(0);
                }
                if( silver_money = present("silver_money", me) )
                {
                        silver = silver_money->query_amount();
                        silver_money->set_amount(0);
                }
                if( coin_money = present("coin_money", me) )
                {
                        coin = coin_money->query_amount();
                        coin_money->set_amount(0);
                }
                value = gold * 10000 + silver * 100 + coin;
                value += me->query("bank/coin");
                if( value >= 2000000000 ){ //����Ϊ��ʮ�����ƽ�
                        value = 2000000000;
                write("���Ĵ����������޶�ʮ�����ƽ�,����Ǯׯ�Զ��������Ǯ������������\n");
                }
                if(value <0){
                  value=0;
                  write("����Ǯ��͵����, �����ڲ�û�д��κε�Ǯ!!\n");
                }
                me->set("bank/coin", value);
                write(sprintf("��һ������ %d ���ƽ� %d ������ %d ��ͭǮ\n",
                        gold, silver, coin));
                return 1;
        } 

        if( sscanf(arg, "%d %s", amount, kind) != 2 )
                return notify_fail("\ndeposit <����> <����> || deposit all \n");

        n_money = present(kind + "_money", me);
          
        if( !n_money || file_size("/obj/money/"+kind+".c") < 0 )
                return notify_fail("��û������Ǯ��\n");                      

        if( amount < 1 )             
                return notify_fail("�㲻�ܴ�����������Ǯ��\n");
                
        if( n_money->query_amount() < amount)
                return notify_fail("��û����ô��Ǯ\n");
        if( n_money->query_amount() == amount)
                return notify_fail("��Ҫȫ����?����Է�Ǯ��!\n");

        n_money->set_amount(n_money->query_amount()-amount);    

        value = n_money ? n_money->query("base_value") : call_other("/obj/money/" + kind, "query", "base_value" );
        value = value*amount + me->query("bank/coin");

        if( value >= 2000000000 ) {
                value = 2000000000;
        write("���Ĵ����������޶�ʮ�����ƽ�,����Ǯׯ�Զ��������Ǯ������������\n");
        }
        if(value<0){
          value=0;
          write("����Ǯ��͵����, ��Ĵ�û��!!!\n");
        }
        me->set("bank/coin", value);                      
        write(sprintf("��һ������%s%s%s\n",chinese_number(amount),n_money->query("base_unit"),n_money->query("name")));

        return 1;
}
                                                           
int do_convert(string arg)
{                                                            
        string from, to;
        int amount, bv1, bv2;
        object from_ob, to_ob;

        if( !arg || sscanf(arg, "%d %s to %s", amount, from, to)!=3 )
                return notify_fail("ָ���ʽ��convert <����> <����> to <����>\n");

        from_ob = present(from + "_money", this_player());
        to_ob = present(to + "_money", this_player());

        if( !to_ob && file_size("/obj/money/" + to + ".c") < 0 )
                return notify_fail("����һ���һ��Ǯ��\n");
        if( !from_ob )          
                return notify_fail("������û�����ֻ��ҡ�\n");
        if( amount < 1 )        
                return notify_fail("�һ�����һ������Ҫ�һ�һ����\n");
        if( (int)from_ob->query_amount() < amount )
                return notify_fail("������û����ô��" + from_ob->query("name") +".\n");
        if( !bv1 = from_ob->query("base_value") )
                return notify_fail("���ֶ�����ֵǮ��\n");

        bv2 = to_ob ? to_ob->query("base_value") : call_other("/obj/money/" + to, "query", "base_value" );

        if( bv1 < bv2 ) 
                amount -= amount % (bv2 / bv1);
        if( amount==0 ) 
                return notify_fail("��Щ" + from_ob->query("name") + "�ļ�ֵ̫���ˣ�������\n");
        if(amount*bv1/bv2 <=0)
          return notify_fail("��Ǯʧ��, һ�λ�̫��Ǯ�����!!!\n");
        if( !to_ob ) {
                to_ob = new("/obj/money/" + to);
                to_ob->move(this_player());
                to_ob->set_amount(amount * bv1 / bv2);
        } else   
                to_ob->add_amount(amount * bv1 / bv2);
        message_vision( sprintf("$N������ȡ��%s%s%s������%s%s%s��\n",        
                chinese_number(amount), from_ob->query("base_unit"), from_ob->query("name"),
                chinese_number(amount * bv1 / bv2), to_ob->query("base_unit"),to_ob->query("name")),
                this_player() );      
        from_ob->add_amount(-amount);
        return 1;
}    

int lend_money(string arg)
{
        int lend;
        object me = this_player();

        if( me->query("combat_exp") < 50000 )
                return notify_fail("���ʵս��������Ҫ 50000 �ſ��Խ�Ǯ.\n");
        if( !arg || sscanf(arg, "%d coin", lend) != 1 )
                return notify_fail("����Ҫ��Ǯׯ�����Ǯ, ��� lend <����> coin\n");
        if( lend < 1 )
                return notify_fail("����Ҫ�����Ǯѽ?\n");
        if(me->query("bank/lend")>=me->query("combat_exp")/10000*5000 )
                return notify_fail("���Ѿ���������Ǯׯ��Ǯ��.\n");
        if( lend > me->query("combat_exp")/10000*5000 - me->query("bank/lend") )
                return notify_fail(sprintf("�����ֻ�ܽ� %d ��Ǯ.\n",me->query("combat_exp")/10000*5000-me->query("bank/lend")));

        me->pay_player(lend);
        me->add("bank/lend", lend);
        write(sprintf("����Ǯׯ����� %d ��Ǯ.\n", lend));
        return 1;
}

int relend_money(string arg)
{
        int lend;
        object me=this_player();

        if( me->query("bank/lend") <= 1 )
                return notify_fail("�����ڲ�û��ǷǮ.\n");
        if( !arg || sscanf(arg, "%d coin", lend) != 1 )
                return notify_fail("�����Ҫ��ǮׯǮ�Ļ���� relend <����> coin\n");
        if( lend < 1 )
                return notify_fail("����Ҫ��������Ǯ?\n");
        if( lend*20/21 > me->query("bank/lend") )
                return notify_fail("�㲢û�н���ô����Ǯ.\n");
        if( !me->can_afford(lend) )
                return notify_fail("������û����ô����Ǯ.\n");

        me->add("bank/lend", -lend*20/21);
        me->pay_money(lend);
        write(sprintf("�㻹�� %d ��Ǯ��Ǯׯ.\n", lend));
        return 1;
}

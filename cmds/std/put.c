// put.c

int do_put(object me, object obj, object dest);

void create() { seteuid(getuid()); }

int main(object me, string arg)
{
        string target, item;
        object obj, dest, *inv, obj2;
        int i, amount;

        if(!arg) return notify_fail("��Ҫ��ʲô�����Ž����\n");

        if( sscanf(arg, "%s in %s", item, target)!=2 )
                return notify_fail("��Ҫ��˭ʲô������\n");

        dest = present(target, me);
        if( !dest || living(dest) ) dest = present(target, environment(me));
        if( !dest || living(dest) )
                return notify_fail("����û������������\n");

        if(sscanf(item, "%d %s", amount, item)==2) {
                if( !objectp(obj = present(item, me)) )
                        return notify_fail("������û������������\n");
                if( obj->query("no_put") )
                        return notify_fail("�ⶫ�����ܶ���\n");
                if( !obj->query_amount() )
                        return notify_fail( obj->name() + "���ܱ��ֿ���\n");
                if( amount < 1 )
                        return notify_fail("����������������һ����\n");
                if( amount > obj->query_amount() )
                        return notify_fail("��û����ô���" + obj->name() + "��\n");
                else if( amount == (int)obj->query_amount() )
                        return do_put(me, obj, dest);
                else {
                        obj->set_amount( (int)obj->query_amount() - amount );
                        obj2 = new(base_name(obj));
                        obj2->set_amount(amount);
                        return do_put(me, obj2, dest);
                }
        }

        if(item=="all") {
                inv = all_inventory(me);
                for(i=0; i<sizeof(inv); i++) {
                if (inv[i]->query("no_put"))
                        return notify_fail("�ⶫ�����ܶ���\n");
                        if( inv[i] != dest ) do_put(me, inv[i], dest);
                }
                write("Ok.\n");
                return 1;
        }

        if(!objectp(obj = present(item, me)))
                return notify_fail("������û������������\n");
        if( obj->query("no_put") )
                return notify_fail("�ⶫ�����ܶ���\n");
        return do_put(me, obj, dest);
}

int do_put(object me, object obj, object dest)
{
        string record;
        if(obj==dest)
        {
              return notify_fail("put ��Ʒa in ��Ʒa?����bug�,����ʹ��!!\n");
        }
if(obj->query_temp("focuskee")==1)
return notify_fail("�˶�����������ס���ܷ��¡�\n");
        if( obj->move(dest) ) {
                message_vision( sprintf("$N��һ%s%s�Ž�%s��\n",
                        obj->query("unit"), obj->name(), dest->name()),
                        me );
                if (wizardp (me)) {
                log_file("wiz/PUT", sprintf("%s(%s) ��%s(%s)�Ž�%son%s\n"
                ,me->query("name"),me->query("id"),obj->name(),(string)base_name(obj),dest->name(),ctime(time()) ));
                }
                return 1;
        }
        else return 0;
}

int help(object me)
{
write(@HELP
ָ���ʽ : put <��Ʒ����> in <ĳ����>
ָ��˵�� : 
           ���ָ��������㽫ĳ����Ʒ�Ž�һ��������
           ��Ȼ��������Ҫӵ��������Ʒ��
HELP
    );
    return 1;
}

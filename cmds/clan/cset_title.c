// cset_title.c
// ��������ƺŵ�....           BY      Chan

inherit F_CLEAN_UP;

int main(object me, string arg)
{
  string tmp;
//Ҫ��һ��û���ɵ��˲����ð�!!!
// by bss
   if(!me->query("clan")) return 0;
  if(me->query("clan/rank") > 1)
    return notify_fail("��Ľ׼�����,����ʹ�ô�ָ��\n");
  if (!arg) return notify_fail("��Ҫ���Լ�ȡʲô�ƺţ�\n");
//  tmp = remove_color (arg);
  if( strlen(arg) > 10)
  return notify_fail("��ĳƺ�������̫�ŵĹ��Ų�����һ����һ��ġ�����һ��ġ�\n");
/*
// Ӧ����ȡ���ºŰ�... edit by lys
        if (arg == "none") {
                me->delete("nickname");
                write ("��Ĵº�ȡ����.\n");
                return 1; 
        }
*/

  //      arg = trans_color(arg);

        me->set("clan/title", arg );
        write("��ĳƺ��趨���\n");
        return 1;
}

int help(object me)
{
        write(@HELP
ָ���ʽ : cset_title <��Ҫ�ĳƺ�>
ָ��˵�� :
           ���ָ������ð���Ϊ�Լ�ȡһ��Ư���ĳƺš�

HELP
        );
        return 1;
}

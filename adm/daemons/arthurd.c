// arthurd.c
//
//      �����Ų�֪���÷��ĵ� function
//
//                                              Created by Arthur

void create()
{
        seteuid(ROOT_UID);
}

// ����ɾ������Ŀ¼, ����Ŀ¼�µĵ���
int remove_all_dir(string dir)
{
        mixed   *files;
        int     i;

        // �趨 euid
        seteuid(geteuid(previous_object()));

        if( dir[<0] != '/' )
                dir += "/";

        files   = get_dir(dir, -1);
        i       = sizeof(files);

        while(i--) 
        {
                // Ŀ¼�, �Ǿ�ʹ�ô�˵�еĵݻ�
                if( files[i][1] == -2 )
                        remove_all_dir( dir+files[i][0] );
                else 
                        rm( dir+files[i][0] );
        }
        rmdir(dir);
        return 1;
}

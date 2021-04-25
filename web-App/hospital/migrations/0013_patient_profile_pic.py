

from django.db import migrations, models


class Migration(migrations.Migration):

    dependencies = [
        ('hospital', '0012_auto_20200523_1336'),
    ]

    operations = [
        migrations.AddField(
            model_name='patient',
            name='profile_pic',
            field=models.ImageField(blank=True, null=True, upload_to='profile_pic/PatientProfilePic/'),
        ),
    ]

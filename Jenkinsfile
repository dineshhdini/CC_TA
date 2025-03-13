pipeline {
    agent any
    
    stages {
        stage('Build') {
            steps {
                echo 'Building the new program...'
                // Compiling the new cpp file in the root directory
                sh 'g++ -o hello hello.cpp'
                // Building YOUR_SRN-1 job
                build 'PES1UG22CS189-1'
            }
        }
        
        stage('Test') {
            steps {
                echo 'Testing the new program...'
                // Print output of the new cpp file
                sh './hello > output.txt'
                sh 'cat output.txt'
                echo 'Test completed successfully!'
            }
        }
        
        stage('Deploy') {
            steps {
                echo 'Starting deployment process...'
                sh '''
                    echo "Creating deployment package..."
                    mkdir -p deploy
                    cp hello deploy/
                    cp output.txt deploy/
                    echo "Deployment package created successfully!"
                    echo "In a real environment, this would be deployed to production servers."
                '''
                echo 'Deployment completed successfully!'
            }
        }
    }
    
    post {
        success {
            echo 'Pipeline executed successfully! All stages passed.'
        }
        failure {
            echo 'Pipeline failed! Check the console output for errors.'
        }
        always {
            echo 'Pipeline execution completed. Cleaning up workspace...'
            sh 'rm -rf deploy || true'
        }
    }
}
